// virtual.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class student {
public:
	virtual void study(){
		cout << "学生正在学习。" << endl;
	}
	virtual void play() {
		cout << "学生正字玩。" << endl;
	}
};

class puple :public student{
public:
	void study() {
		cout << "小学生正在学习。" << endl;
	}
};

class cstudent :public student {
public:
	void study() {
		cout << "大学生正在学习。" << endl;
	}
};

int main()
{
	int* _fptr = (int*)_vfprintf_l;
	
	student a;
	puple b;
	//b.study;


	student* pa = &a;
	//student* pb = &

	cout << "地址是" << pa<< endl;
	
	int* ace = (int*)& a; //ACE指向 对象a   ace是一个 指针
	//a中的虚函数表的地址  把ace解引用，得到对象a的首地址 
	//对象a中的 有两个虚函数表，本质上是数组，所以n是 虚函数表（数组) 首地址
	int* n    =  (int*)*ace;
	
	cout << n << endl;
	//对数组首地址解引用 就是获取了虚表中第一个虚函数的指针  同理 第二个是第二的指针
	int* diyigef = (int*)*n;
	int* diergef = (int*)*(n+1);
	
	cout << "第一个：" << diyigef << endl;
	cout << "第二个：" << diergef << endl;

}

