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
		cout << "�����ǣ� " << getX() << "," << getY() << endl;
	}
private:
	double x;
	double y;
//protected:
//
};

//�������캯��
//complex::complex(double c,double d) 
//{
//	double f = 1;
//	double g = 2;
//}


//�����Э����Ĭ�ϵĹ��캯����Ĭ�ϵ���������

