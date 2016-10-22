#include "NcgLuaDatabase.h"
#include"NcgLuaManager.hxx"
#include<cassert>
void NcgLuaDatabase::Load(const std::string& aFileName, const int aId, std::string aIdName)
{
	//éwíËIDÇ™égópçœÇ›Ç≈Ç†ÇÈèÍçá
	assert(mLuaDatabase.count(aId) == 0);

	NcgLuaManager* lManager = new NcgLuaManager;
	lManager->Load(aFileName);

	//É}ÉlÅ[ÉWÉÉÇìoò^
	mLuaDatabase.insert({ aId,lManager });
	//åüçıIDÇ‡ìoò^
	if (aIdName.empty() == true) {
		aIdName = aFileName;
	}
	mIdAccesser.insert({ aIdName, aId });
}

NcgLuaManager * NcgLuaDatabase::GetManager(int aId)
{
	NcgLuaManager* lResult{};
	if (mLuaDatabase.count(aId) != 0) {
		lResult = mLuaDatabase[aId];
	}
	return lResult;
}

NcgLuaManager * NcgLuaDatabase::GetManager(const std::string & aIdName)
{
	NcgLuaManager* lResult{};
	if (mIdAccesser.count(aIdName) != 0) {
		lResult = mLuaDatabase[mIdAccesser[aIdName]];
	}
	return lResult;
}

void NcgLuaDatabase::Release()
{
	for (auto& lManager : mLuaDatabase) {
		delete lManager.second;
	}
	mLuaDatabase.clear();
	mIdAccesser.clear();
	
}

NcgLuaDatabase::~NcgLuaDatabase()
{
	Release();
}
