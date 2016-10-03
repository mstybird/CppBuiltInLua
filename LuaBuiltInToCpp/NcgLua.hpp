#pragma once
#include"NcgLuaManager.hxx"
#ifdef _M_X64
#ifdef _DEBUG
#pragma comment(lib,"Lua/lib/lua5.3.3_x64d.lib")
#else
#pragma comment(lib,"Lua/lib/lua5.3.3_x64.lib")
#endif
#else
#ifdef _DEBUG
#pragma comment(lib,"Lua/lib/lua5.3.3_x86d.lib")
#else
#pragma comment(lib,"Lua/lib/lua5.3.3_x86.lib")
#endif
#endif