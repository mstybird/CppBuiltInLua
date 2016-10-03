#pragma once
#include<string>
#include"NcgLuaHelper.hxx"
class NcgLuaBase {
public:
	enum class eType {
		NIL,
		BOOLEAN,
		LIGHTUSERDATA,
		NUMBER,
		STRING,
		TABLE,
		FUNCTION,
		USERDATA,
		THREAD
	};
	//LuaStateの作成
	NcgLuaBase();
	virtual ~NcgLuaBase();

	void Release();

	//ファイルの読み込み(初期状態では自動実行
	bool Load(const std::string&aFileName, bool aLoadToExec = true, bool aLoadStandardLib = true);
protected:
	bool LoadFile(const std::string&aFileName);

	//スタックに存在する関数の呼び出し
	//成功するとtrue、失敗するとfalseが帰る
	bool CallFunction(int aArgCount = 0, int aReturnCount = 0, int aErrorValue = 0);

	//読み込み関係のフラグを初期化
	void ResetFlag();

	//何かしらエラーが出たらこの関数を呼ぶ
	//aCloseをtrueにするとエラー出力とともにLuaStateを閉じる
	//エラーがなければfalseを返す
	void ErrorLog();

	//引数をスタックに入れる
	template<typename tFirst, typename... tRest>
	void PushArgment(const tFirst& aFirst, const tRest&... aRest) {
		mHelper->PushArgment(aFirst);
		PushArgment(aRest...);
	}
	void PushArgment() {};

	void ClearStack();

	NcgLuaHelper* mHelper;
	lua_State *mState;
	bool mLoadedStandardLib = false;
	bool mLoadedLua = false;
	bool mFirstCalled = false;
};
