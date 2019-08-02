// 3.17.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int i;
	string str;
	vector<string> v1;
	while (cin >> str)
		v1.push_back(str);
	for (auto &i : v1)
	{
		for (auto &j : str)
			j = toupper(j);
	}
		
	for (auto i : v1)
	{
		for (auto j : str)
		{
			cout << j << endl;
		}
	}
}

