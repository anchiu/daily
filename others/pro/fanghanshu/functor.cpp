// fanghanshu.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "functor.h"

using namespace std;

int main()
{
	int a, b;
	cout << "请输入两个数 ，用空格将两个数隔开：" << endl;
	cin >> a >> b;
	pl<int>  p;
	mi<int>  m;
	int c = p(a, b);
	int d = m(a, b);
	cout << "两个数的和是： " << c << endl;
	cout << "两个数的差是： " << d << endl;
}


