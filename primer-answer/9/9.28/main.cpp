#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<vector>
#include<forward_list>
using namespace std;
 
void func(forward_list<string> &a, string b, string c)
{
	forward_list<string>::iterator it1 = a.before_begin();
	forward_list<string>::iterator it2 = a.begin();
 
	bool flag = false; 
	for (it2; it2 != a.end(); it1 = it2++)
	{
		if (*it2 == b)
		{
			a.insert_after(it2,c);
			flag = true;
		}
	}
	if (!flag)
	{
		a.insert_after(it1,c);
	}
}
 
int main(int argc, char**argv)
{
	forward_list<string> list1(4,"sadi");
	string a = "sad5";
	string b = "sad";
 
	func(list1,a,b);
 
	forward_list<string>::iterator it1 = list1.begin();
	for (it1; it1!=list1.end();++it1)
	{
		cout<<*it1<<" ";
	}
	return 0;
}
