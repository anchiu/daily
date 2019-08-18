// inherited.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "head/complex.h"

using namespace std;

int main()
{
	int v1, v2;
	cout << "请输入两个整数，一个为复数的实部，一个为虚部，中间用空格隔开" << endl;
	cin >> v1 >> v2;
	complex a;
	a.set(v1,v2);
	a.show();
	return 0;
}
