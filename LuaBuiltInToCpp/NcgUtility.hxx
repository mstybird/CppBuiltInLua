#pragma once
template<class T, class...Rest>
T head(T value, const Rest&...);

#ifdef _DEBUG
#define NcgAssert(Flag,ErrorMessage) {assertMessage(Flag,ErrorMessage);}
void assertMessage(bool aFlag, const char*aMessage);
#else
#define NcgAssert(Flag,ErrorMessage)
#endif
