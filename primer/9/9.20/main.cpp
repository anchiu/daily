#include <iostream>
#include <list>
#include <deque>

using namespace std;

int main(int argc, char** argv) {
	int i;
	list<int> l1;
	deque<int> d1; //���´��������intֵ
	deque<int> d2; //���´��ż����intֵ 
	while (cin >> i) // ��⵽��ֵΪ0 �Զ�������ȡ����
	{
		l1.push_back(i); 
	} 
//	for (auto i : l1)
//	{
//		cout << i << endl;
//	 } 
	for (auto i : l1)
	{
		if (i % 2)    //ż�� 
		{
			d2.push_back(i); 
		} 
		else
		{
			d1.push_back(i);
		}
	}
	cout << "ż���У� ";
	for(auto i : d2)
		cout << i << " " ;
	cout << endl;
	cout << "�����У� ";

	for (auto i : d1)
		cout << i << " "; 
	return 0;
}
