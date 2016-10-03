#include"Lua\lua.hpp"
#include"NcgLuaBase.hxx"
#include"NcgLuaHelper.hxx"
#include<string>
#include<iostream>

NcgLuaBase::NcgLuaBase() {
	mState = luaL_newstate();
	mHelper = new NcgLuaHelper;
	mHelper->SetState(mState);
};
NcgLuaBase::~NcgLuaBase() {
	Release();
	delete mHelper;
};

void NcgLuaBase::Release() {
	lua_close(mState);
	ResetFlag();
}

//ファイルの読み込み(初期状態では自動実行
bool NcgLuaBase::Load(const std::string&aFileName, bool aLoadToExec, bool aLoadStandardLib) {
	{
		//読み込み前のフラグの初期化
		if (mLoadedLua == true)ResetFlag();

		//ファイル読み込み
		if (!this->LoadFile(aFileName)) {
			lua_close(mState);
			this->ResetFlag();
			return false;
		}

		//読み込み成功フラグをセット
		mLoadedLua = true;

		//標準ライブラリの読み込み
		if (aLoadStandardLib == true) {
			luaL_openlibs(mState);

			mLoadedStandardLib = true;
		}
	}

	//luaの最初の実行
	{
		//読み込みと同時に実行する場合
		if (aLoadToExec == true) {
			if (!this->CallFunction()) {
				lua_close(mState);
				this->ResetFlag();
				return false;
			}
			//最初の実行成功フラグを立てる
			mFirstCalled = true;
		}
	}

	return true;
}

bool NcgLuaBase::LoadFile(const std::string&aFileName) {
	//ファイル読み込み
	int lResult = luaL_loadfile(mState, aFileName.c_str());
	//読み込みに失敗したらエラー表示してfalseを返す
	if (lResult != 0) {
		ErrorLog();
		return false;
	}
	return true;
}

//スタックに存在する関数の呼び出し
//成功するとtrue、失敗するとfalseが帰る
bool NcgLuaBase::CallFunction(int aArgCount, int aReturnCount, int aErrorValue) {
	int lResult = lua_pcall(mState, aArgCount, aReturnCount, aErrorValue);
	if (lResult != 0) {
		ErrorLog();
		return false;
	}
	return true;
}

//読み込み関係のフラグを初期化
void NcgLuaBase::ResetFlag() {
	mLoadedStandardLib = false;
	mLoadedLua = false;
	mFirstCalled = false;
};

//何かしらエラーが出たらこの関数を呼ぶ
//aCloseをtrueにするとエラー出力とともにLuaStateを閉じる
//エラーがなければfalseを返す
void NcgLuaBase::ErrorLog() {
	std::cout << lua_tostring(mState, -1) << std::endl;
}

void NcgLuaBase::ClearStack()
{
	lua_settop(mState, 0);
}
