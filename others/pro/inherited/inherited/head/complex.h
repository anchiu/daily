#pragma once
#include<iostream>

using namespace std;

class complex
{
public:
	//complex();
	//complex(double c,double d);
	//complex(const complex& com);
	//~complex();
	double getX()
	{
		return x;
	}
	double getY()
	{
		return y;
	}
	void set(double a, double b)
	{
		x = a;
		y = b;
	}
	void show()
	{
		cout << "复数是： " << getX() << "," << getY() << endl;
	}
private:
	double x;
	double y;
//protected:
//
};

//拷贝构造函数
//complex::complex(double c,double d) 
//{
//	double f = 1;
//	double g = 2;
//}


//最后妥协是用默认的构造函数和默认的析构函数

