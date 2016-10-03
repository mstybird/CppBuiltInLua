#include"NcgUtility.hxx"
#include<iostream>

template<class T, class...Rest>
T head(T value, const Rest&...) {
	return value;
	
}

#ifdef _DEBUG
void assertMessage(bool aFlag, const char * aMessage)
{
	if (aFlag == false) {
		std::cout << aMessage << std::endl;
		abort();
	}
}
#endif
