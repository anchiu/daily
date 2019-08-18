// p38.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

using namespace std;

int GetSize(int data[])
{
	return sizeof(data);
}


int main()
{
	int data1[] = { 1,2,3,4,5 };
	int size1 = sizeof(data1);

	int* data2 = data1;
	int size2 = sizeof(data2);

	int size3 = GetSize(data1);

	cout <<  size1 <<  size2 << size3;
	cout << "Hello World!\n"; 

	return 0;
}
