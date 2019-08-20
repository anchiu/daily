// 其.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

	vector<int>  v1;
	int i;
	cout << "请输入一组数据，将会输入数组中任意一个重复的整数：" << endl;


	while (cin >> i && i != 999) //输入“999”之后程序停止输入开始进行运算
	{
		v1.push_back(i);
	}

	sort(v1.begin(), v1.end());

	for (int j = 0; j != v1.size() ; ++j)
	{
		if (v1[j] == v1[j+1])
		{
			cout << "数组中重复的数字是： " << v1[j] << endl;
		}
	}
	std::cout << "程序执行完毕。";
	return 0;
}

