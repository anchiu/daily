class CMyString
{
public:
	CMyString(char* pData = nullptr);
	CMyString(const CMyString& str);
	~CMyString(void);
	CMyString& opertor=(const CMyString&)

private:
	char* m_pData;
};


//下面是初级程序员的思路
CMyString& 
CMyString::operator=(const CMyString  &str)
{
	if (*this == str)
		return *this;

	delete[] m_pData;
	m_pData = nullptr;

	m_pData = new char[strlen(str.m_pData) + 1];
	strcpy(m_pData, str.m_pData);
	
	return *this;
}