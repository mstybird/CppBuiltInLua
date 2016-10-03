#pragma once
#include"NcgLuaBase.hxx"
#include"NcgUtility.hxx"
class NcgLuaManager :public NcgLuaBase {
public:
	NcgLuaManager();
	~NcgLuaManager();

	//関数を直接呼び出す
	//呼び出しに成功したらtrueを返すが、この時点で関数自体の戻り値は取得できない
	template<typename...tArg>
	__declspec(deprecated("引数チェックが行われません。Callメソッドを使用してください")) bool CallDirect(const std::string&aFuncName, const int aReturnCount, const tArg&...aArgs) {
		GetFunction(aFuncName.c_str());
		PushArgment(aArgs...);
		//引数の個数を取得
		int lArgCount = sizeof...(aArgs);
		if (!this->CallFunction(lArgCount, aReturnCount)) {
			this->ErrorLog();
			return false;
		}
		return true;
	}

	//あらかじめ設定した値で関数コール
	template<typename...tArg>
	bool Call(const tArg&... aArgs) {
		//間違った数の引数を与えると停止させる
		NcgAssert(sizeof...(aArgs) == mArgsCount, "Argment Count Error");
		//設定されている
		this->ClearStack();
		this->GetFunction(mFuncName->c_str());
		PushArgment(aArgs...);
		if (!this->CallFunction(mArgsCount, mReturnCount)) {
			this->ErrorLog();
			return false;
		}
		return true;
	}
	//Cライクに取得する。
	//第1戻り値のインデックスを0とし、以降、1,2,3と続く
	template<typename tType>
	void Return(tType& aOutValue, const int aIndex);

	//関数ごとに戻り値の数と引数の数を定義する
	void SetFunction(
		const std::string& aFunctionName,
		const int aReturnCount = 0,
		const int aArgsCount = 0
	);

	//値を取得する
	template<typename tType>
	bool GetGlobal(const std::string&aValueName, tType& aOutValue);

private:
	void GetFunction(const char*aFuncName);

	std::string* mFuncName;
	//あらかじめ定義しておく(lua側の可変長引数には対応しない)
	//ことでstatic_assertで凡ミスをなくす
	int mReturnCount;
	int mArgsCount;

};

