#pragma once
#include<vector>
#include<map>
#include<unordered_map>
struct lua_State;
class NcgLuaManager;
class NcgLuaBase;
class NcgLuaHelper {
	friend class NcgLuaManager;
	friend class NcgLuaBase;
private:
	NcgLuaHelper() {};
	~NcgLuaHelper() {};

	void SetState(lua_State*aState);

	///戻り値を取得する
	//取得する値がvectorだった場合
	template<typename tType>
	void GetReturnValue(std::vector<tType>&aOutValue, const int aIndex);

	//STL以外で直接受け取る場合
	void GetReturnValue(bool&aOutValue, const int aIndex);
	void GetReturnValue(char&aOutValue, const int aIndex);
	void GetReturnValue(short&aOutValue, const int aIndex);
	void GetReturnValue(int&aOutValue, const int aIndex);
	void GetReturnValue(long&aOutValue, const int aIndex);
	void GetReturnValue(long long&aOutValue, const int aIndex);
	void GetReturnValue(unsigned char&aOutValue, const int aIndex);
	void GetReturnValue(unsigned short&aOutValue, const int aIndex);
	void GetReturnValue(unsigned int&aOutValue, const int aIndex);
	void GetReturnValue(unsigned long&aOutValue, const int aIndex);
	void GetReturnValue(unsigned long long&aOutValue, const int aIndex);
	void GetReturnValue(float&aOutValue, const int aIndex);
	void GetReturnValue(double&aOutValue, const int aIndex);
	void GetReturnValue(std::string&aOutValue, const int aIndex);



	///GetGlobalから呼ばれる
	template<typename tType>
	bool GetValue(const std::string& aValueName, std::vector<tType>& aOutValue);

	///vectorのGetValueからのみ呼ばれる
	void GetValue(std::vector<std::string>& aOutValue, int aIndex)const;
	void GetValue(std::vector<bool>& aOutValue, int aIndex)const;
	void GetValue(std::vector<char>& aOutValue, int aIndex)const;
	void GetValue(std::vector<short>& aOutValue, int aIndex)const;
	void GetValue(std::vector<int>& aOutValue, int aIndex)const;
	void GetValue(std::vector<long>& aOutValue, int aIndex)const;
	void GetValue(std::vector<long long>& aOutValue, int aIndex)const;
	void GetValue(std::vector<unsigned char>& aOutValue, int aIndex)const;
	void GetValue(std::vector<unsigned short>& aOutValue, int aIndex)const;
	void GetValue(std::vector<unsigned int>& aOutValue, int aIndex)const;
	void GetValue(std::vector<unsigned long>& aOutValue, int aIndex)const;
	void GetValue(std::vector<unsigned long long>& aOutValue, int aIndex)const;
	void GetValue(std::vector<float>& aOutValue, int aIndex)const;
	void GetValue(std::vector<double>& aOutValue, int aIndex)const;

	///GetGlobalから呼ばれる(ベクター以外)
	bool GetValue(const std::string& aValueName, std::string& aOutValue);
	bool GetValue(const std::string& aValueName, bool& aOutValue);
	bool GetValue(const std::string& aValueName, char& aOutValue);
	bool GetValue(const std::string& aValueName, short& aOutValue);
	bool GetValue(const std::string& aValueName, int& aOutValue);
	bool GetValue(const std::string& aValueName, long& aOutValue);
	bool GetValue(const std::string& aValueName, long long& aOutValue);
	bool GetValue(const std::string& aValueName, unsigned char& aOutValue);
	bool GetValue(const std::string& aValueName, unsigned short& aOutValue);
	bool GetValue(const std::string& aValueName, unsigned int& aOutValue);
	bool GetValue(const std::string& aValueName, unsigned long& aOutValue);
	bool GetValue(const std::string& aValueName, unsigned long long& aOutValue);
	bool GetValue(const std::string& aValueName, float& aOutValue);
	bool GetValue(const std::string& aValueName, double& aOutValue);




	///GetGlobalから呼ばれる(ベクター以外)
	///スタックに要素を挿入する
	void PushArgment(const bool aValue)const;
	void PushArgment(const char aValue)const;
	void PushArgment(const short aValue)const;
	void PushArgment(const int aValue)const;
	void PushArgment(const long aValue)const;
	void PushArgment(const long long aValue)const;
	void PushArgment(const unsigned char aValue)const;
	void PushArgment(const unsigned short aValue)const;
	void PushArgment(const unsigned int aValue)const;
	void PushArgment(const unsigned long aValue)const;
	void PushArgment(const unsigned long long aValue)const;
	void PushArgment(const float aValue)const;
	void PushArgment(const double aValue)const;
	void PushArgment(const long double aValue)const;
	void PushArgment(const std::string& aValue)const;
	void PushArgment(const char* aValue) const;
	void PushArgment(const nullptr_t aValue)const;

	///GetGlobalから呼ばれる
	///vectorをtableに挿入
	void PushArgment(const std::vector<bool>& aValue)const;
	void PushArgment(const std::vector<char>& aValue)const;
	void PushArgment(const std::vector<short>& aValue)const;
	void PushArgment(const std::vector<int>& aValue)const;
	void PushArgment(const std::vector<long>& aValue)const;
	void PushArgment(const std::vector<long long>& aValue)const;
	void PushArgment(const std::vector<unsigned char>& aValue)const;
	void PushArgment(const std::vector<unsigned short>& aValue)const;
	void PushArgment(const std::vector<unsigned int>& aValue)const;
	void PushArgment(const std::vector<unsigned long>& aValue)const;
	void PushArgment(const std::vector<unsigned long long>& aValue)const;
	void PushArgment(const std::vector<float>& aValue)const;
	void PushArgment(const std::vector<double>& aValue)const;
	void PushArgment(const std::vector<std::string>& aValue)const;

	void PushArgment(const std::unordered_map<std::string, bool>& aValue)const;
	void PushArgment(const std::unordered_map<std::string, char>& aValue)const;
	void PushArgment(const std::unordered_map<std::string, short>& aValue)const;
	void PushArgment(const std::unordered_map<std::string, int>& aValue)const;
	void PushArgment(const std::unordered_map<std::string, long>& aValue)const;
	void PushArgment(const std::unordered_map<std::string, long long>& aValue)const;

	void PushArgment(const std::unordered_map<std::string, unsigned char>& aValue)const;
	void PushArgment(const std::unordered_map<std::string, unsigned short>& aValue)const;
	void PushArgment(const std::unordered_map<std::string, unsigned int>& aValue)const;
	void PushArgment(const std::unordered_map<std::string, unsigned long>& aValue)const;
	void PushArgment(const std::unordered_map<std::string, unsigned long long>& aValue)const;

	void PushArgment(const std::unordered_map<std::string, float>& aValue)const;
	void PushArgment(const std::unordered_map<std::string, double>& aValue)const;
	void PushArgment(const std::unordered_map<std::string, std::string>& aValue)const;

	void PushArgment(const std::map<std::string, bool>& aValue)const;
	void PushArgment(const std::map<std::string, char>& aValue)const;
	void PushArgment(const std::map<std::string, short>& aValue)const;
	void PushArgment(const std::map<std::string, int>& aValue)const;
	void PushArgment(const std::map<std::string, long>& aValue)const;
	void PushArgment(const std::map<std::string, long long>& aValue)const;

	void PushArgment(const std::map<std::string, unsigned char>& aValue)const;
	void PushArgment(const std::map<std::string, unsigned short>& aValue)const;
	void PushArgment(const std::map<std::string, unsigned int>& aValue)const;
	void PushArgment(const std::map<std::string, unsigned long>& aValue)const;
	void PushArgment(const std::map<std::string, unsigned long long>& aValue)const;

	void PushArgment(const std::map<std::string, float>& aValue)const;
	void PushArgment(const std::map<std::string, double>& aValue)const;
	void PushArgment(const std::map<std::string, std::string>& aValue)const;




	lua_State* mStateWeak;

};
