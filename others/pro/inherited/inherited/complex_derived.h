#pragma once
#include "head/complex.h"

//��complex���м̳�һ��������

class complex_derived :public complex
{
public:
	void show()
	{
		cout << "�����ǣ�" << getX() << "+" << getY() << "i" << endl;
	}
	std::string getname() { return name; }
	std::string getadd() { return add; }
private:
	std::string name;
	std::string add;
};

