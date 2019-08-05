const char* findSubString(const char* str, const char* subStr)
{
	return strstr(const_cast<char*>str,	const_cast<char*>subStr);
}