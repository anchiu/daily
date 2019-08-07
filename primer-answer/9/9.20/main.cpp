#include <iostream>
#include <list>
#include <deque>

using namespace std;

int main(int argc, char** argv) {
	int i;
	list<int> l1;
	deque<int> d1; //等下存放奇数的int值
	deque<int> d2; //等下存放偶数的int值 
	while (cin >> i) // 检测到数值为0 自动结束读取数字
	{
		l1.push_back(i); 
	} 
//	for (auto i : l1)
//	{
//		cout << i << endl;
//	 } 
	for (auto i : l1)
	{
		if (i % 2)    //偶数 
		{
			d2.push_back(i); 
		} 
		else
		{
			d1.push_back(i);
		}
	}
	cout << "偶数有： ";
	for(auto i : d2)
		cout << i << " " ;
	cout << endl;
	cout << "奇数有： ";

	for (auto i : d1)
		cout << i << " "; 
	return 0;
}
