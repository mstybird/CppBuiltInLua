
#include"NcgLua.hpp"
#include<string>
#include<vector>
#include<iostream>
#include<map>

/*
	タスク：実際にプランニングの処理をする
*/

int main() {

	NcgLuaDatabase lDatabase;
	lDatabase.Load("AI/htn_attack.lua", 0, "htnAttack");
	NcgLuaManager* LC = lDatabase.GetManager("htnAttack");
	LC->SetFunction("GetPlan", 1, 2);	//関数の設定

	LC->Call(true,false);	//配列を引数として渡す

	//戻り値の取得
	std::vector<std::string>vv;
	LC->Return(vv, 0);	//{"moving","hiding","shot","win"}

	for (auto&x : vv) {
		std::cout << x << std::endl;
	}
	std::cout << std::endl;


}