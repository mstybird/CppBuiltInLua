#include"NcgUtility.hxx"
#include"NcgLuaHelper.hxx"
#include"Lua\lua.hpp"
#include<string>
#include<vector>
#include<cassert>
void NcgLuaHelper::PushArgment(const bool aValue)const {
	lua_pushboolean(mStateWeak, aValue);
}

void NcgLuaHelper::PushArgment(const char aValue)const {
	lua_pushinteger(mStateWeak, aValue);
}

void NcgLuaHelper::PushArgment(const short aValue)const {
	lua_pushinteger(mStateWeak, aValue);
}

void NcgLuaHelper::PushArgment(const int aValue)const {
	lua_pushinteger(mStateWeak, aValue);
}

void NcgLuaHelper::PushArgment(const long aValue)const {
	lua_pushinteger(mStateWeak, aValue);
}

void NcgLuaHelper::PushArgment(const long long aValue)const {
	lua_pushinteger(mStateWeak, aValue);
}

void NcgLuaHelper::PushArgment(const unsigned char aValue)const {
	lua_pushinteger(mStateWeak, aValue);
}

void NcgLuaHelper::PushArgment(const unsigned short aValue)const {
	lua_pushinteger(mStateWeak, aValue);
}

void NcgLuaHelper::PushArgment(const unsigned int aValue)const {
	lua_pushinteger(mStateWeak, aValue);
}

void NcgLuaHelper::PushArgment(const unsigned long aValue)const {
	lua_pushinteger(mStateWeak, aValue);
}


void NcgLuaHelper::PushArgment(const unsigned long long aValue)const {
	lua_pushinteger(mStateWeak, aValue);
}

void NcgLuaHelper::PushArgment(const float aValue)const {
	lua_pushnumber(mStateWeak, aValue);
}
void NcgLuaHelper::PushArgment(const double aValue)const {
	lua_pushnumber(mStateWeak, aValue);
}
void NcgLuaHelper::PushArgment(const long double aValue)const {
	lua_pushnumber(mStateWeak, aValue);
}


void NcgLuaHelper::PushArgment(const std::string& aValue)const {
	lua_pushstring(mStateWeak, aValue.c_str());
}
void NcgLuaHelper::PushArgment(const char* aValue) const {
	lua_pushstring(mStateWeak, aValue);
}
void NcgLuaHelper::PushArgment(const nullptr_t aValue)const {
	lua_pushnil(mStateWeak);
}

void NcgLuaHelper::PushArgment(const std::vector<bool>& aValue) const
{
	lua_newtable(mStateWeak);
	//tableのスタック位置を取得
	int lStackPos = lua_gettop(mStateWeak);
	int lIndex = 1;
	for (const auto& llValue : aValue) {
		lua_pushboolean(mStateWeak, llValue);
		lua_rawseti(mStateWeak, lStackPos, lIndex);
		++lIndex;
	}
}
void NcgLuaHelper::PushArgment(const std::vector<char>& aValue) const
{
	lua_newtable(mStateWeak);
	//tableのスタック位置を取得
	int lStackPos = lua_gettop(mStateWeak);
	int lIndex = 1;
	for (const auto& llValue : aValue) {
		lua_pushinteger(mStateWeak, llValue);
		lua_rawseti(mStateWeak, lStackPos, lIndex);
		++lIndex;
	}
}
void NcgLuaHelper::PushArgment(const std::vector<short>& aValue) const
{
	lua_newtable(mStateWeak);
	//tableのスタック位置を取得
	int lStackPos = lua_gettop(mStateWeak);
	int lIndex = 1;
	for (const auto& llValue : aValue) {
		lua_pushinteger(mStateWeak, llValue);
		lua_rawseti(mStateWeak, lStackPos, lIndex);
		++lIndex;
	}
}
void NcgLuaHelper::PushArgment(const std::vector<int>& aValue) const
{
	lua_newtable(mStateWeak);
	//tableのスタック位置を取得
	int lStackPos = lua_gettop(mStateWeak);
	int lIndex = 1;
	for (const auto& llValue : aValue) {
		lua_pushinteger(mStateWeak, llValue);
		lua_rawseti(mStateWeak, lStackPos, lIndex);
		++lIndex;
	}
}
void NcgLuaHelper::PushArgment(const std::vector<long>& aValue) const
{
	lua_newtable(mStateWeak);
	//tableのスタック位置を取得
	int lStackPos = lua_gettop(mStateWeak);
	int lIndex = 1;
	for (const auto& llValue : aValue) {
		lua_pushinteger(mStateWeak, llValue);
		lua_rawseti(mStateWeak, lStackPos, lIndex);
		++lIndex;
	}
}
void NcgLuaHelper::PushArgment(const std::vector<long long>& aValue) const
{
	lua_newtable(mStateWeak);
	//tableのスタック位置を取得
	int lStackPos = lua_gettop(mStateWeak);
	int lIndex = 1;
	for (const auto& llValue : aValue) {
		lua_pushinteger(mStateWeak, llValue);
		lua_rawseti(mStateWeak, lStackPos, lIndex);
		++lIndex;
	}
}

void NcgLuaHelper::PushArgment(const std::vector<unsigned char>& aValue) const
{
	lua_newtable(mStateWeak);
	//tableのスタック位置を取得
	int lStackPos = lua_gettop(mStateWeak);
	int lIndex = 1;
	for (const auto& llValue : aValue) {
		lua_pushinteger(mStateWeak, llValue);
		lua_rawseti(mStateWeak, lStackPos, lIndex);
		++lIndex;
	}
}
void NcgLuaHelper::PushArgment(const std::vector<unsigned short>& aValue) const
{
	lua_newtable(mStateWeak);
	//tableのスタック位置を取得
	int lStackPos = lua_gettop(mStateWeak);
	int lIndex = 1;
	for (const auto& llValue : aValue) {
		lua_pushinteger(mStateWeak, llValue);
		lua_rawseti(mStateWeak, lStackPos, lIndex);
		++lIndex;
	}
}
void NcgLuaHelper::PushArgment(const std::vector<unsigned int>& aValue) const
{
	lua_newtable(mStateWeak);
	//tableのスタック位置を取得
	int lStackPos = lua_gettop(mStateWeak);
	int lIndex = 1;
	for (const auto& llValue : aValue) {
		lua_pushinteger(mStateWeak, llValue);
		lua_rawseti(mStateWeak, lStackPos, lIndex);
		++lIndex;
	}
}
void NcgLuaHelper::PushArgment(const std::vector<unsigned long>& aValue) const
{
	lua_newtable(mStateWeak);
	//tableのスタック位置を取得
	int lStackPos = lua_gettop(mStateWeak);
	int lIndex = 1;
	for (const auto& llValue : aValue) {
		lua_pushinteger(mStateWeak, llValue);
		lua_rawseti(mStateWeak, lStackPos, lIndex);
		++lIndex;
	}
}
void NcgLuaHelper::PushArgment(const std::vector<unsigned long long>& aValue) const
{
	lua_newtable(mStateWeak);
	//tableのスタック位置を取得
	int lStackPos = lua_gettop(mStateWeak);
	int lIndex = 1;
	for (const auto& llValue : aValue) {
		lua_pushinteger(mStateWeak, llValue);
		lua_rawseti(mStateWeak, lStackPos, lIndex);
		++lIndex;
	}
}

void NcgLuaHelper::PushArgment(const std::vector<float>& aValue) const
{
	lua_newtable(mStateWeak);
	//tableのスタック位置を取得
	int lStackPos = lua_gettop(mStateWeak);
	int lIndex = 1;
	for (const auto& llValue : aValue) {
		lua_pushnumber(mStateWeak, llValue);
		lua_rawseti(mStateWeak, lStackPos, lIndex);
		++lIndex;
	}
}

void NcgLuaHelper::PushArgment(const std::vector<double>& aValue) const
{
	lua_newtable(mStateWeak);
	//tableのスタック位置を取得
	int lStackPos = lua_gettop(mStateWeak);
	int lIndex = 1;
	for (const auto& llValue : aValue) {
		lua_pushnumber(mStateWeak, llValue);
		lua_rawseti(mStateWeak, lStackPos, lIndex);
		++lIndex;
	}
}

void NcgLuaHelper::PushArgment(const std::vector<std::string>& aValue) const
{
	lua_newtable(mStateWeak);
	//tableのスタック位置を取得
	int lStackPos = lua_gettop(mStateWeak);
	int lIndex = 1;
	for (const auto& llValue : aValue) {
		lua_pushstring(mStateWeak, llValue.c_str());
		lua_rawseti(mStateWeak, lStackPos, lIndex);
		++lIndex;
	}
}

void NcgLuaHelper::PushArgment(const std::map<std::string, bool>& aValue)const {
	lua_newtable(mStateWeak);
	//tableのスタック位置を取得
	int lStackPos = -3;

	for (const auto&llPair : aValue) {
		lua_pushstring(mStateWeak, llPair.first.c_str());
		lua_pushinteger(mStateWeak, llPair.second);
		lua_settable(mStateWeak, lStackPos);
	}

}
void NcgLuaHelper::PushArgment(const std::map<std::string, char>& aValue)const {
	lua_newtable(mStateWeak);
	//tableのスタック位置を取得
	int lStackPos = -3;

	for (const auto&llPair : aValue) {
		lua_pushstring(mStateWeak, llPair.first.c_str());
		lua_pushinteger(mStateWeak, llPair.second);
		lua_settable(mStateWeak, lStackPos);
	}

}
void NcgLuaHelper::PushArgment(const std::map<std::string, short>& aValue)const {
	lua_newtable(mStateWeak);
	//tableのスタック位置を取得
	int lStackPos = -3;

	for (const auto&llPair : aValue) {
		lua_pushstring(mStateWeak, llPair.first.c_str());
		lua_pushinteger(mStateWeak, llPair.second);
		lua_settable(mStateWeak, lStackPos);
	}

}
void NcgLuaHelper::PushArgment(const std::map<std::string, int>& aValue)const {
	lua_newtable(mStateWeak);
	//tableのスタック位置を取得
	int lStackPos = -3;;

	for (const auto&llPair : aValue) {
		lua_pushstring(mStateWeak, llPair.first.c_str());
		lua_pushinteger(mStateWeak, llPair.second);
		lua_settable(mStateWeak, lStackPos);
	}

}
void NcgLuaHelper::PushArgment(const std::map<std::string, long>& aValue)const {
	lua_newtable(mStateWeak);
	//tableのスタック位置を取得
	int lStackPos = -3;

	for (const auto&llPair : aValue) {
		lua_pushstring(mStateWeak, llPair.first.c_str());
		lua_pushinteger(mStateWeak, llPair.second);
		lua_settable(mStateWeak, lStackPos);
	}

}
void NcgLuaHelper::PushArgment(const std::map<std::string, long long>& aValue)const {
	lua_newtable(mStateWeak);
	//tableのスタック位置を取得
	int lStackPos = -3;

	for (const auto&llPair : aValue) {
		lua_pushstring(mStateWeak, llPair.first.c_str());
		lua_pushinteger(mStateWeak, llPair.second);
		lua_settable(mStateWeak, lStackPos);
	}

}

void NcgLuaHelper::PushArgment(const std::map<std::string, unsigned char>& aValue)const {
	lua_newtable(mStateWeak);
	//tableのスタック位置を取得
	int lStackPos = -3;

	for (const auto&llPair : aValue) {
		lua_pushstring(mStateWeak, llPair.first.c_str());
		lua_pushinteger(mStateWeak, llPair.second);
		lua_settable(mStateWeak, lStackPos);
	}

}
void NcgLuaHelper::PushArgment(const std::map<std::string, unsigned short>& aValue)const {
	lua_newtable(mStateWeak);
	//tableのスタック位置を取得
	int lStackPos = -3;

	for (const auto&llPair : aValue) {
		lua_pushstring(mStateWeak, llPair.first.c_str());
		lua_pushinteger(mStateWeak, llPair.second);
		lua_settable(mStateWeak, lStackPos);
	}

}
void NcgLuaHelper::PushArgment(const std::map<std::string, unsigned int>& aValue)const {
	lua_newtable(mStateWeak);
	//tableのスタック位置を取得
	int lStackPos = -3;

	for (const auto&llPair : aValue) {
		lua_pushstring(mStateWeak, llPair.first.c_str());
		lua_pushinteger(mStateWeak, llPair.second);
		lua_settable(mStateWeak, lStackPos);
	}

}
void NcgLuaHelper::PushArgment(const std::map<std::string, unsigned long>& aValue)const {
	lua_newtable(mStateWeak);
	//tableのスタック位置を取得
	int lStackPos = -3;

	for (const auto&llPair : aValue) {
		lua_pushstring(mStateWeak, llPair.first.c_str());
		lua_pushinteger(mStateWeak, llPair.second);
		lua_settable(mStateWeak, lStackPos);
	}

}
void NcgLuaHelper::PushArgment(const std::map<std::string, unsigned long long>& aValue)const {
	lua_newtable(mStateWeak);
	//tableのスタック位置を取得
	int lStackPos = -3;

	for (const auto&llPair : aValue) {
		lua_pushstring(mStateWeak, llPair.first.c_str());
		lua_pushinteger(mStateWeak, llPair.second);
		lua_settable(mStateWeak, lStackPos);
	}

}

void NcgLuaHelper::PushArgment(const std::map<std::string, float>& aValue)const {
	lua_newtable(mStateWeak);
	//tableのスタック位置を取得
	int lStackPos = -3;

	for (const auto&llPair : aValue) {
		lua_pushstring(mStateWeak, llPair.first.c_str());
		lua_pushnumber(mStateWeak, llPair.second);
		lua_settable(mStateWeak, lStackPos);
	}

}
void NcgLuaHelper::PushArgment(const std::map<std::string, double>& aValue)const {
	lua_newtable(mStateWeak);
	//tableのスタック位置を取得
	int lStackPos = -3;

	for (const auto&llPair : aValue) {
		lua_pushstring(mStateWeak, llPair.first.c_str());
		lua_pushnumber(mStateWeak, llPair.second);
		lua_settable(mStateWeak, lStackPos);
	}

}
void NcgLuaHelper::PushArgment(const std::map<std::string, std::string>& aValue)const {
	lua_newtable(mStateWeak);
	//tableのスタック位置を取得
	int lStackPos = -3;

	for (const auto&llPair : aValue) {
		lua_pushstring(mStateWeak, llPair.first.c_str());
		lua_pushstring(mStateWeak, llPair.second.c_str());
		lua_settable(mStateWeak, lStackPos);
	}

}


void NcgLuaHelper::PushArgment(const std::unordered_map<std::string, bool>& aValue)const {
	lua_newtable(mStateWeak);
	//tableのスタック位置を取得
	int lStackPos = -3;

	for (const auto&llPair : aValue) {
		lua_pushstring(mStateWeak, llPair.first.c_str());
		lua_pushinteger(mStateWeak, llPair.second);
		lua_settable(mStateWeak, lStackPos);
	}

}
void NcgLuaHelper::PushArgment(const std::unordered_map<std::string, char>& aValue)const {
	lua_newtable(mStateWeak);
	//tableのスタック位置を取得
	int lStackPos = -3;

	for (const auto&llPair : aValue) {
		lua_pushstring(mStateWeak, llPair.first.c_str());
		lua_pushinteger(mStateWeak, llPair.second);
		lua_settable(mStateWeak, lStackPos);
	}

}
void NcgLuaHelper::PushArgment(const std::unordered_map<std::string, short>& aValue)const {
	lua_newtable(mStateWeak);
	//tableのスタック位置を取得
	int lStackPos = -3;

	for (const auto&llPair : aValue) {
		lua_pushstring(mStateWeak, llPair.first.c_str());
		lua_pushinteger(mStateWeak, llPair.second);
		lua_settable(mStateWeak, lStackPos);
	}

}
void NcgLuaHelper::PushArgment(const std::unordered_map<std::string, int>& aValue)const {
	lua_newtable(mStateWeak);
	//tableのスタック位置を取得
	int lStackPos = -3;

	for (const auto&llPair : aValue) {
		lua_pushstring(mStateWeak, llPair.first.c_str());
		lua_pushinteger(mStateWeak, llPair.second);
		lua_settable(mStateWeak, lStackPos);
	}

}
void NcgLuaHelper::PushArgment(const std::unordered_map<std::string, long>& aValue)const {
	lua_newtable(mStateWeak);
	//tableのスタック位置を取得
	int lStackPos = -3;

	for (const auto&llPair : aValue) {
		lua_pushstring(mStateWeak, llPair.first.c_str());
		lua_pushinteger(mStateWeak, llPair.second);
		lua_settable(mStateWeak, lStackPos);
	}

}
void NcgLuaHelper::PushArgment(const std::unordered_map<std::string, long long>& aValue)const {
	lua_newtable(mStateWeak);
	//tableのスタック位置を取得
	int lStackPos = -3;

	for (const auto&llPair : aValue) {
		lua_pushstring(mStateWeak, llPair.first.c_str());
		lua_pushinteger(mStateWeak, llPair.second);
		lua_settable(mStateWeak, lStackPos);
	}

}

void NcgLuaHelper::PushArgment(const std::unordered_map<std::string, unsigned char>& aValue)const {
	lua_newtable(mStateWeak);
	//tableのスタック位置を取得
	int lStackPos = -3;

	for (const auto&llPair : aValue) {
		lua_pushstring(mStateWeak, llPair.first.c_str());
		lua_pushinteger(mStateWeak, llPair.second);
		lua_settable(mStateWeak, lStackPos);
	}

}
void NcgLuaHelper::PushArgment(const std::unordered_map<std::string, unsigned short>& aValue)const {
	lua_newtable(mStateWeak);
	//tableのスタック位置を取得
	int lStackPos = -3;

	for (const auto&llPair : aValue) {
		lua_pushstring(mStateWeak, llPair.first.c_str());
		lua_pushinteger(mStateWeak, llPair.second);
		lua_settable(mStateWeak, lStackPos);
	}

}
void NcgLuaHelper::PushArgment(const std::unordered_map<std::string, unsigned int>& aValue)const {
	lua_newtable(mStateWeak);
	//tableのスタック位置を取得
	int lStackPos = -3;

	for (const auto&llPair : aValue) {
		lua_pushstring(mStateWeak, llPair.first.c_str());
		lua_pushinteger(mStateWeak, llPair.second);
		lua_settable(mStateWeak, lStackPos);
	}

}
void NcgLuaHelper::PushArgment(const std::unordered_map<std::string, unsigned long>& aValue)const {
	lua_newtable(mStateWeak);
	//tableのスタック位置を取得
	int lStackPos = -3;

	for (const auto&llPair : aValue) {
		lua_pushstring(mStateWeak, llPair.first.c_str());
		lua_pushinteger(mStateWeak, llPair.second);
		lua_settable(mStateWeak, lStackPos);
	}

}
void NcgLuaHelper::PushArgment(const std::unordered_map<std::string, unsigned long long>& aValue)const {
	lua_newtable(mStateWeak);
	//tableのスタック位置を取得
	int lStackPos = -3;

	for (const auto&llPair : aValue) {
		lua_pushstring(mStateWeak, llPair.first.c_str());
		lua_pushinteger(mStateWeak, llPair.second);
		lua_settable(mStateWeak, lStackPos);
	}

}

void NcgLuaHelper::PushArgment(const std::unordered_map<std::string, float>& aValue)const {
	lua_newtable(mStateWeak);
	//tableのスタック位置を取得
	int lStackPos = -3;

	for (const auto&llPair : aValue) {
		lua_pushstring(mStateWeak, llPair.first.c_str());
		lua_pushnumber(mStateWeak, llPair.second);
		lua_settable(mStateWeak, lStackPos);
	}

}
void NcgLuaHelper::PushArgment(const std::unordered_map<std::string, double>& aValue)const {
	lua_newtable(mStateWeak);
	//tableのスタック位置を取得
	int lStackPos = -3;

	for (const auto&llPair : aValue) {
		lua_pushstring(mStateWeak, llPair.first.c_str());
		lua_pushnumber(mStateWeak, llPair.second);
		lua_settable(mStateWeak, lStackPos);
	}

}
void NcgLuaHelper::PushArgment(const std::unordered_map<std::string, std::string>& aValue)const {
	lua_newtable(mStateWeak);
	//tableのスタック位置を取得
	int lStackPos = -3;

	for (const auto&llPair : aValue) {
		lua_pushstring(mStateWeak, llPair.first.c_str());
		lua_pushstring(mStateWeak, llPair.second.c_str());
		lua_settable(mStateWeak, lStackPos);
	}

}




void NcgLuaHelper::SetState(lua_State*aState) {
	mStateWeak = aState;
}

void NcgLuaHelper::GetReturnValue(bool & aOutValue, const int aIndex)
{
	aOutValue = static_cast<bool>(lua_toboolean(mStateWeak, aIndex) ? true : false);
}

void NcgLuaHelper::GetReturnValue(char & aOutValue, const int aIndex)
{
	if (lua_isboolean(mStateWeak, aIndex)) {
		aOutValue = lua_toboolean(mStateWeak, aIndex) ? 1 : 0;
	}
	else {
		aOutValue = static_cast<char>(lua_tointeger(mStateWeak, aIndex));
	}
}

void NcgLuaHelper::GetReturnValue(short & aOutValue, const int aIndex)
{
	if (lua_isboolean(mStateWeak, aIndex)) {
		aOutValue = lua_toboolean(mStateWeak, aIndex) ? 1 : 0;
	}
	else {
		aOutValue = static_cast<short>(lua_tointeger(mStateWeak, aIndex));
	}
}

void NcgLuaHelper::GetReturnValue(int&aOutValue, const int aIndex) {
	if (lua_isboolean(mStateWeak, aIndex)) {
		aOutValue = lua_toboolean(mStateWeak, aIndex) ? 1 : 0;
	}
	else {
		aOutValue = static_cast<int>(lua_tointeger(mStateWeak, aIndex));
	}
}
void NcgLuaHelper::GetReturnValue(long & aOutValue, const int aIndex)
{
	if (lua_isboolean(mStateWeak, aIndex)) {
		aOutValue = lua_toboolean(mStateWeak, aIndex) ? 1 : 0;
	}
	else {
		aOutValue = static_cast<long>(lua_tointeger(mStateWeak, aIndex));
	}
}
void NcgLuaHelper::GetReturnValue(long long & aOutValue, const int aIndex)
{
	if (lua_isboolean(mStateWeak, aIndex)) {
		aOutValue = lua_toboolean(mStateWeak, aIndex) ? 1 : 0;
	}
	else {
		aOutValue = static_cast<long long>(lua_tointeger(mStateWeak, aIndex));
	}
}
void NcgLuaHelper::GetReturnValue(unsigned char & aOutValue, const int aIndex)
{
	if (lua_isboolean(mStateWeak, aIndex)) {
		aOutValue = lua_toboolean(mStateWeak, aIndex) ? 1 : 0;
	}
	else {
		aOutValue = static_cast<unsigned char>(lua_tointeger(mStateWeak, aIndex));
	}
}
void NcgLuaHelper::GetReturnValue(unsigned short & aOutValue, const int aIndex)
{
	if (lua_isboolean(mStateWeak, aIndex)) {
		aOutValue = lua_toboolean(mStateWeak, aIndex) ? 1 : 0;
	}
	else {
		aOutValue = static_cast<unsigned short>(lua_tointeger(mStateWeak, aIndex));
	}
}
void NcgLuaHelper::GetReturnValue(unsigned int & aOutValue, const int aIndex)
{
	if (lua_isboolean(mStateWeak, aIndex)) {
		aOutValue = lua_toboolean(mStateWeak, aIndex) ? 1 : 0;
	}
	else {
		aOutValue = static_cast<unsigned int>(lua_tointeger(mStateWeak, aIndex));
	}
}
void NcgLuaHelper::GetReturnValue(unsigned long & aOutValue, const int aIndex)
{
	if (lua_isboolean(mStateWeak, aIndex)) {
		aOutValue = lua_toboolean(mStateWeak, aIndex) ? 1 : 0;
	}
	else {
		aOutValue = static_cast<unsigned long>(lua_tointeger(mStateWeak, aIndex));
	}
}
void NcgLuaHelper::GetReturnValue(unsigned long long & aOutValue, const int aIndex)
{
	if (lua_isboolean(mStateWeak, aIndex)) {
		aOutValue = lua_toboolean(mStateWeak, aIndex) ? 1 : 0;
	}
	else {
		aOutValue = static_cast<unsigned long long>(lua_tointeger(mStateWeak, aIndex));
	}
}
void NcgLuaHelper::GetReturnValue(float & aOutValue, const int aIndex)
{
	if (lua_isboolean(mStateWeak, aIndex)) {
		aOutValue = lua_toboolean(mStateWeak, aIndex) ? 1.0f : 0.0f;
	}
	else {
		aOutValue = static_cast<float>(lua_tonumber(mStateWeak, aIndex));
	}
}
void NcgLuaHelper::GetReturnValue(double & aOutValue, const int aIndex)
{
	if (lua_isboolean(mStateWeak, aIndex)) {
		aOutValue = lua_toboolean(mStateWeak, aIndex) ? 1 : 0;
	}
	else {
		aOutValue = static_cast<double>(lua_tonumber(mStateWeak, aIndex));
	}
}
void NcgLuaHelper::GetReturnValue(std::string&aOutValue, const int aIndex) {
	if (lua_isstring(mStateWeak, aIndex)) {
		aOutValue = lua_tostring(mStateWeak, aIndex);
	}
	else {
		if (lua_isboolean(mStateWeak, aIndex)) {
			aOutValue = lua_toboolean(mStateWeak, aIndex) ? "true" : "false";
		}
		else {
			aOutValue = std::string();
		}
	}
}

template void NcgLuaHelper::GetReturnValue(std::vector<bool>& aOutValue, const int aIndex);
template void NcgLuaHelper::GetReturnValue(std::vector<char>& aOutValue, const int aIndex);
template void NcgLuaHelper::GetReturnValue(std::vector<short>& aOutValue, const int aIndex);
template void NcgLuaHelper::GetReturnValue(std::vector<int>& aOutValue, const int aIndex);
template void NcgLuaHelper::GetReturnValue(std::vector<long>& aOutValue, const int aIndex);
template void NcgLuaHelper::GetReturnValue(std::vector<long long>& aOutValue, const int aIndex);
template void NcgLuaHelper::GetReturnValue(std::vector<unsigned char>& aOutValue, const int aIndex);
template void NcgLuaHelper::GetReturnValue(std::vector<unsigned short>& aOutValue, const int aIndex);
template void NcgLuaHelper::GetReturnValue(std::vector<unsigned int>& aOutValue, const int aIndex);
template void NcgLuaHelper::GetReturnValue(std::vector<unsigned long>& aOutValue, const int aIndex);
template void NcgLuaHelper::GetReturnValue(std::vector<unsigned long long>& aOutValue, const int aIndex);
template void NcgLuaHelper::GetReturnValue(std::vector<float>& aOutValue, const int aIndex);
template void NcgLuaHelper::GetReturnValue(std::vector<double>& aOutValue, const int aIndex);
template void NcgLuaHelper::GetReturnValue(std::vector<std::string>& aOutValue, const int aIndex);
template<typename tType>
void NcgLuaHelper::GetReturnValue(std::vector<tType>& aOutValue, const int aIndex)
{
	//戻り値のみのベクタにするためにクリアする
	aOutValue.clear();
	int lStackCount = lua_gettop(mStateWeak);
	int lIndex;
	bool lResult = false;
	lua_pushnil(mStateWeak);
	lStackCount = lua_gettop(mStateWeak);
	lIndex = -lStackCount;
	while (lua_next(mStateWeak, lIndex) != 0 && lStackCount != lua_gettop(mStateWeak)) {
		lStackCount = lua_gettop(mStateWeak);
		lua_pushvalue(mStateWeak, lIndex);
		GetValue(aOutValue, lIndex);
		lua_pop(mStateWeak, -lIndex);
		lStackCount = lua_gettop(mStateWeak);
	}
}

bool NcgLuaHelper::GetValue(const std::string& aValueName, std::string& aOutValue) {
	//スタック数取得
	int lStackCount = lua_gettop(mStateWeak);
	bool lResult = false;
	lua_getglobal(mStateWeak, aValueName.c_str());



	if (lua_isstring(mStateWeak, lStackCount + 1)) {
		aOutValue = lua_tostring(mStateWeak, lStackCount + 1);
	}
	else {
		if (lua_isboolean(mStateWeak, lStackCount + 1)) {
			aOutValue = lua_toboolean(mStateWeak, lStackCount + 1) ? "true" : "false";
		}
		else {
			aOutValue = std::string();
		}
	}

	lResult = true;
	lua_pop(mStateWeak, 1);
	return lResult;
}

bool NcgLuaHelper::GetValue(const std::string & aValueName, bool & aOutValue)
{
	//スタック数取得
	int lStackCount = lua_gettop(mStateWeak);
	bool lResult = false;
	lua_getglobal(mStateWeak, aValueName.c_str());
	if (lua_isboolean(mStateWeak, lStackCount + 1)) {
		
		aOutValue = lua_toboolean(mStateWeak, lStackCount + 1) ? true : false;
		lResult = true;
	}
	lua_pop(mStateWeak, 1);

	return lResult;
}

bool NcgLuaHelper::GetValue(const std::string & aValueName, char & aOutValue)
{
	//スタック数取得
	int lStackCount = lua_gettop(mStateWeak);
	bool lResult = false;
	lua_getglobal(mStateWeak, aValueName.c_str());
	if (lua_isnumber(mStateWeak, lStackCount + 1)) {
		aOutValue = static_cast<char>(lua_tointeger(mStateWeak, lStackCount + 1));
		lResult = true;

	}
	else {
		if (lua_type(mStateWeak, lStackCount + 1) == LUA_TBOOLEAN) {
			aOutValue = lua_toboolean(mStateWeak, lStackCount + 1) ? 1 : 0;
		}
		else {
			aOutValue = 0;
		}
		lResult = false;
	}
	lua_pop(mStateWeak, 1);
	return lResult;
}

bool NcgLuaHelper::GetValue(const std::string & aValueName, short & aOutValue)
{
	//スタック数取得
	int lStackCount = lua_gettop(mStateWeak);
	bool lResult = false;
	lua_getglobal(mStateWeak, aValueName.c_str());
	if (lua_isnumber(mStateWeak, lStackCount + 1)) {
		aOutValue = static_cast<short>(lua_tointeger(mStateWeak, lStackCount + 1));
		lResult = true;

	}
	else {
		if (lua_type(mStateWeak, lStackCount + 1) == LUA_TBOOLEAN) {
			aOutValue = lua_toboolean(mStateWeak, lStackCount + 1) ? 1 : 0;
		}
		else {
			aOutValue = 0;
		}
		lResult = false;
	}
	lua_pop(mStateWeak, 1);

	return lResult;
}

//グローバル変数を取得
bool NcgLuaHelper::GetValue(const std::string& aValueName, int& aOutValue) {
	//スタック数取得
	int lStackCount = lua_gettop(mStateWeak);
	bool lResult = false;
	lua_getglobal(mStateWeak, aValueName.c_str());
	if (lua_isnumber(mStateWeak, lStackCount + 1)) {
		aOutValue = static_cast<int>(lua_tointeger(mStateWeak, lStackCount + 1));
		lResult = true;
		
	}
	else {
		if (lua_type(mStateWeak, lStackCount + 1) == LUA_TBOOLEAN) {
			aOutValue = lua_toboolean(mStateWeak, lStackCount + 1) ? 1 : 0;
		}
		else {
			aOutValue = 0;
		}
		lResult = false;
	}
	lua_pop(mStateWeak, 1);

	return lResult;
}

bool NcgLuaHelper::GetValue(const std::string & aValueName, long & aOutValue)
{
	//スタック数取得
	int lStackCount = lua_gettop(mStateWeak);
	bool lResult = false;
	lua_getglobal(mStateWeak, aValueName.c_str());
	if (lua_isnumber(mStateWeak, lStackCount + 1)) {
		aOutValue = static_cast<long>(lua_tointeger(mStateWeak, lStackCount + 1));
		lResult = true;

	}
	else {
		if (lua_type(mStateWeak, lStackCount + 1) == LUA_TBOOLEAN) {
			aOutValue = lua_toboolean(mStateWeak, lStackCount + 1) ? 1 : 0;
		}
		else {
			aOutValue = 0;
		}
		lResult = false;
	}
	lua_pop(mStateWeak, 1);

	return lResult;
}

bool NcgLuaHelper::GetValue(const std::string & aValueName, long long & aOutValue)
{
	//スタック数取得
	int lStackCount = lua_gettop(mStateWeak);
	bool lResult = false;
	lua_getglobal(mStateWeak, aValueName.c_str());
	if (lua_isnumber(mStateWeak, lStackCount + 1)) {
		aOutValue = static_cast<long long>(lua_tointeger(mStateWeak, lStackCount + 1));
		lResult = true;

	}
	else {
		if (lua_type(mStateWeak, lStackCount + 1) == LUA_TBOOLEAN) {
			aOutValue = lua_toboolean(mStateWeak, lStackCount + 1) ? 1 : 0;
		}
		else {
			aOutValue = 0;
		}
		lResult = false;
	}
	lua_pop(mStateWeak, 1);

	return lResult;
}

bool NcgLuaHelper::GetValue(const std::string & aValueName, unsigned char & aOutValue)
{
	//スタック数取得
	int lStackCount = lua_gettop(mStateWeak);
	bool lResult = false;
	lua_getglobal(mStateWeak, aValueName.c_str());
	if (lua_isnumber(mStateWeak, lStackCount + 1)) {
		aOutValue = static_cast<unsigned char>(lua_tointeger(mStateWeak, lStackCount + 1));
		lResult = true;

	}
	else {
		if (lua_type(mStateWeak, lStackCount + 1) == LUA_TBOOLEAN) {
			aOutValue = lua_toboolean(mStateWeak, lStackCount + 1) ? 1 : 0;
		}
		else {
			aOutValue = 0;
		}
		lResult = false;
	}
	lua_pop(mStateWeak, 1);

	return lResult;
}

bool NcgLuaHelper::GetValue(const std::string & aValueName, unsigned short & aOutValue)
{
	//スタック数取得
	int lStackCount = lua_gettop(mStateWeak);
	bool lResult = false;
	lua_getglobal(mStateWeak, aValueName.c_str());
	if (lua_isnumber(mStateWeak, lStackCount + 1)) {
		aOutValue = static_cast<unsigned short>(lua_tointeger(mStateWeak, lStackCount + 1));
		lResult = true;

	}
	else {
		if (lua_type(mStateWeak, lStackCount + 1) == LUA_TBOOLEAN) {
			aOutValue = lua_toboolean(mStateWeak, lStackCount + 1) ? 1 : 0;
		}
		else {
			aOutValue = 0;
		}
		lResult = false;
	}
	lua_pop(mStateWeak, 1);

	return lResult;
}

bool NcgLuaHelper::GetValue(const std::string & aValueName, unsigned int & aOutValue)
{
	//スタック数取得
	int lStackCount = lua_gettop(mStateWeak);
	bool lResult = false;
	lua_getglobal(mStateWeak, aValueName.c_str());
	if (lua_isnumber(mStateWeak, lStackCount + 1)) {
		aOutValue = static_cast<unsigned int>(lua_tointeger(mStateWeak, lStackCount + 1));
		lResult = true;

	}
	else {
		if (lua_type(mStateWeak, lStackCount + 1) == LUA_TBOOLEAN) {
			aOutValue = lua_toboolean(mStateWeak, lStackCount + 1) ? 1 : 0;
		}
		else {
			aOutValue = 0;
		}
		lResult = false;
	}
	lua_pop(mStateWeak, 1);

	return lResult;
}

bool NcgLuaHelper::GetValue(const std::string & aValueName, unsigned long & aOutValue)
{
	//スタック数取得
	int lStackCount = lua_gettop(mStateWeak);
	bool lResult = false;
	lua_getglobal(mStateWeak, aValueName.c_str());
	if (lua_isnumber(mStateWeak, lStackCount + 1)) {
		aOutValue = static_cast<unsigned long>(lua_tointeger(mStateWeak, lStackCount + 1));
		lResult = true;

	}
	else {
		if (lua_type(mStateWeak, lStackCount + 1) == LUA_TBOOLEAN) {
			aOutValue = lua_toboolean(mStateWeak, lStackCount + 1) ? 1 : 0;
		}
		else {
			aOutValue = 0;
		}
		lResult = false;
	}
	lua_pop(mStateWeak, 1);

	return lResult;
}

bool NcgLuaHelper::GetValue(const std::string & aValueName, unsigned long long & aOutValue)
{
	//スタック数取得
	int lStackCount = lua_gettop(mStateWeak);
	bool lResult = false;
	lua_getglobal(mStateWeak, aValueName.c_str());
	if (lua_isnumber(mStateWeak, lStackCount + 1)) {
		aOutValue = static_cast<unsigned long long>(lua_tointeger(mStateWeak, lStackCount + 1));
		lResult = true;

	}
	else {
		if (lua_type(mStateWeak, lStackCount + 1) == LUA_TBOOLEAN) {
			aOutValue = lua_toboolean(mStateWeak, lStackCount + 1) ? 1 : 0;
		}
		else {
			aOutValue = 0;
		}
		lResult = false;
	}
	lua_pop(mStateWeak, 1);

	return lResult;
}

bool NcgLuaHelper::GetValue(const std::string & aValueName, float & aOutValue)
{
	//スタック数取得
	int lStackCount = lua_gettop(mStateWeak);
	bool lResult = false;
	lua_getglobal(mStateWeak, aValueName.c_str());
	if (lua_isnumber(mStateWeak, lStackCount + 1)) {
		aOutValue = static_cast<float>(lua_tonumber(mStateWeak, lStackCount + 1));
		lResult = true;

	}
	else {
		if (lua_type(mStateWeak, lStackCount + 1) == LUA_TBOOLEAN) {
			aOutValue = lua_toboolean(mStateWeak, lStackCount + 1) ? 1.0f : 0.0f;
		}
		else {
			aOutValue = 0;
		}
		lResult = false;
	}
	lua_pop(mStateWeak, 1);

	return lResult;
}

bool NcgLuaHelper::GetValue(const std::string & aValueName, double & aOutValue)
{
	//スタック数取得
	int lStackCount = lua_gettop(mStateWeak);
	bool lResult = false;
	lua_getglobal(mStateWeak, aValueName.c_str());
	if (lua_isnumber(mStateWeak, lStackCount + 1)) {

			aOutValue = static_cast<double>(lua_tonumber(mStateWeak, lStackCount + 1));
		lResult = true;
	}
	else {
		if (lua_type(mStateWeak, lStackCount + 1) == LUA_TBOOLEAN) {
			aOutValue = lua_toboolean(mStateWeak, lStackCount + 1) ? 1 : 0;
		}
		else {
			aOutValue = 0;
		}
		lResult = false;
	}
	lua_pop(mStateWeak, 1);

	return lResult;
}



//templateメソッドの明示的実体化
template bool NcgLuaHelper::GetValue(const std::string& aValueName, std::vector<std::string>& aOutValue);
template bool NcgLuaHelper::GetValue(const std::string& aValueName, std::vector<char>& aOutValue);
template bool NcgLuaHelper::GetValue(const std::string& aValueName, std::vector<short>& aOutValue);
template bool NcgLuaHelper::GetValue(const std::string& aValueName, std::vector<int>& aOutValue);
template bool NcgLuaHelper::GetValue(const std::string& aValueName, std::vector<long>& aOutValue);
template bool NcgLuaHelper::GetValue(const std::string& aValueName, std::vector<long long>& aOutValue);
template bool NcgLuaHelper::GetValue(const std::string& aValueName, std::vector<unsigned char>& aOutValue);
template bool NcgLuaHelper::GetValue(const std::string& aValueName, std::vector<unsigned short>& aOutValue);
template bool NcgLuaHelper::GetValue(const std::string& aValueName, std::vector<unsigned int>& aOutValue);
template bool NcgLuaHelper::GetValue(const std::string& aValueName, std::vector<unsigned long>& aOutValue);
template bool NcgLuaHelper::GetValue(const std::string& aValueName, std::vector<unsigned long long>& aOutValue);
template bool NcgLuaHelper::GetValue(const std::string& aValueName, std::vector<float>& aOutValue);
template bool NcgLuaHelper::GetValue(const std::string& aValueName, std::vector<double>& aOutValue);


template<typename tType>
bool NcgLuaHelper::GetValue(const std::string& aValueName, std::vector<tType>& aOutValue) {
	//スタック数取得
	int lStackCount = lua_gettop(mStateWeak);
	int lIndex = -2;
	bool lResult = false;

	lua_getglobal(mStateWeak, aValueName.c_str());
	lua_pushnil(mStateWeak);
	lStackCount = lua_gettop(mStateWeak);
	while (lua_next(mStateWeak, lIndex) != 0 && lStackCount != lua_gettop(mStateWeak)) {
		lStackCount = lua_gettop(mStateWeak);
		lua_pushvalue(mStateWeak, lIndex);
		GetValue(aOutValue, lIndex);
		lua_pop(mStateWeak, -lIndex);
		lStackCount = lua_gettop(mStateWeak);
	}
	lua_pop(mStateWeak, lIndex - 1);
	lStackCount = lua_gettop(mStateWeak);


	return lResult;
}




void NcgLuaHelper::GetValue(std::vector<std::string>& aOutValue, int aIndex) const{
	if (lua_isstring(mStateWeak, aIndex)) {
		aOutValue.push_back(lua_tostring(mStateWeak, aIndex));
	}
	else {
		if (lua_isboolean(mStateWeak, aIndex)) {
			aOutValue.push_back(
				lua_toboolean(mStateWeak, aIndex)? "true" : "false"
			);
		}
		else {
			aOutValue.push_back(std::string());
		}
	}
}

void NcgLuaHelper::GetValue(std::vector<bool>& aOutValue, int aIndex)const {
	aOutValue.push_back(lua_toboolean(mStateWeak, aIndex) ? true : false);
}

void NcgLuaHelper::GetValue(std::vector<char>& aOutValue, int aIndex)const {
	if (lua_type(mStateWeak, aIndex) == LUA_TBOOLEAN) {
		aOutValue.push_back(
			lua_toboolean(mStateWeak, aIndex) ? 1 : 0
		);
	}
	else {
		aOutValue.push_back(static_cast<char>(lua_tointeger(mStateWeak, aIndex)));
	}
}

void NcgLuaHelper::GetValue(std::vector<short>& aOutValue, int aIndex)const {
	if (lua_type(mStateWeak, aIndex) == LUA_TBOOLEAN) {
		aOutValue.push_back(
			lua_toboolean(mStateWeak, aIndex) ? 1 : 0
		);
	}
	else {
		aOutValue.push_back(static_cast<short>(lua_tointeger(mStateWeak, aIndex)));
	}
}

void NcgLuaHelper::GetValue(std::vector<int>& aOutValue, int aIndex)const {

	if (lua_type(mStateWeak, aIndex) == LUA_TBOOLEAN) {
		aOutValue.push_back(
			lua_toboolean(mStateWeak, aIndex) ? 1 : 0
		);
	}
	else {
		aOutValue.push_back(static_cast<int>(lua_tointeger(mStateWeak, aIndex)));
	}

}

void NcgLuaHelper::GetValue(std::vector<long>& aOutValue, int aIndex)const {
	if (lua_type(mStateWeak, aIndex) == LUA_TBOOLEAN) {
		aOutValue.push_back(
			lua_toboolean(mStateWeak, aIndex) ? 1 : 0
		);
	}
	else {
		aOutValue.push_back(static_cast<long>(lua_tointeger(mStateWeak, aIndex)));
	}
}

void NcgLuaHelper::GetValue(std::vector<long long>& aOutValue, int aIndex)const {
	if (lua_type(mStateWeak, aIndex) == LUA_TBOOLEAN) {
		aOutValue.push_back(
			lua_toboolean(mStateWeak, aIndex) ? 1 : 0
		);
	}
	else {
		aOutValue.push_back(static_cast<long long>(lua_tointeger(mStateWeak, aIndex)));
	}
}

void NcgLuaHelper::GetValue(std::vector<unsigned char>& aOutValue, int aIndex)const {
	if (lua_type(mStateWeak, aIndex) == LUA_TBOOLEAN) {
		aOutValue.push_back(
			lua_toboolean(mStateWeak, aIndex) ? 1 : 0
		);
	}
	else {
		aOutValue.push_back(static_cast<unsigned char>(lua_tointeger(mStateWeak, aIndex)));
	}
}

void NcgLuaHelper::GetValue(std::vector<unsigned short>& aOutValue, int aIndex)const {
	if (lua_type(mStateWeak, aIndex) == LUA_TBOOLEAN) {
		aOutValue.push_back(
			lua_toboolean(mStateWeak, aIndex) ? 1 : 0
		);
	}
	else {
		aOutValue.push_back(static_cast<unsigned short>(lua_tointeger(mStateWeak, aIndex)));
	}
}

void NcgLuaHelper::GetValue(std::vector<unsigned int>& aOutValue, int aIndex)const {
	if (lua_type(mStateWeak, aIndex) == LUA_TBOOLEAN) {
		aOutValue.push_back(
			lua_toboolean(mStateWeak, aIndex) ? 1 : 0
		);
	}
	else {
		aOutValue.push_back(static_cast<unsigned int>(lua_tointeger(mStateWeak, aIndex)));
	}
}

void NcgLuaHelper::GetValue(std::vector<unsigned long>& aOutValue, int aIndex)const {
	if (lua_type(mStateWeak, aIndex) == LUA_TBOOLEAN) {
		aOutValue.push_back(
			lua_toboolean(mStateWeak, aIndex) ? 1 : 0
		);
	}
	else {
		aOutValue.push_back(static_cast<unsigned long>(lua_tointeger(mStateWeak, aIndex)));
	}
}

void NcgLuaHelper::GetValue(std::vector<unsigned long long>& aOutValue, int aIndex)const {
	if (lua_type(mStateWeak, aIndex) == LUA_TBOOLEAN) {
		aOutValue.push_back(
			lua_toboolean(mStateWeak, aIndex) ? 1 : 0
		);
	}
	else {
		aOutValue.push_back(static_cast<unsigned long long>(lua_tointeger(mStateWeak, aIndex)));
	}
}

void NcgLuaHelper::GetValue(std::vector<float>& aOutValue, int aIndex)const {
	if (lua_type(mStateWeak, aIndex) == LUA_TBOOLEAN) {
		aOutValue.push_back(
			lua_toboolean(mStateWeak, aIndex) ? 1.0f : 0.0f
		);
	}
	else {
		aOutValue.push_back(static_cast<float>(lua_tonumber(mStateWeak, aIndex)));
	}
}

void NcgLuaHelper::GetValue(std::vector<double>& aOutValue, int aIndex)const {
	if (lua_type(mStateWeak, aIndex) == LUA_TBOOLEAN) {
		aOutValue.push_back(
			lua_toboolean(mStateWeak, aIndex) ? 1 : 0
		);
	}
	else {
		aOutValue.push_back(static_cast<double>(lua_tonumber(mStateWeak, aIndex)));
	}
}