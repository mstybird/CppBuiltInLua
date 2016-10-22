#pragma once
#include"NcgLuaManager.hxx"
#include<unordered_map>
//NcgLua管理マネージャ
class NcgLuaDatabase {
public:
	void Load(const std::string& aFileName, const int aId, std::string aIdName = "");
	NcgLuaManager* GetManager(int aId);
	NcgLuaManager* GetManager(const std::string& aIdName);
	//読み込んだLuaManagerを解放する
	void Release();

	virtual ~NcgLuaDatabase();

private:

	struct LuaRegist
	{
		const int mId;
		const std::string mFileName;
		const std::string mIdName;
		LuaRegist(std::string aFileName, int aId, std::string aIdName) :
			mId(aId),
			mFileName(aFileName),
			mIdName(aIdName)
			{};
	};

	std::unordered_map<int, NcgLuaManager*>mLuaDatabase;
	std::unordered_map<std::string, int>mIdAccesser;	//文字列IDからIDを取得する用
};