// 3.16-c.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v3(10, 42);
	cout << "当前vector中的元素是： ";
	for (auto i : v3)
		cout << i;
	cout << endl;
}
