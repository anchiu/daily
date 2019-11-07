#pragma once
#include "head/complex.h"

//从complex类中继承一个派生类

class complex_derived :public complex
{
public:
	void show()
	{
		cout << "复数是：" << getX() << "+" << getY() << "i" << endl;
	}
	std::string getname() { return name; }
	std::string getadd() { return add; }
private:
	std::string name;
	std::string add;
};

