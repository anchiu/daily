/*
	Name: prac10.1
	Copyright: 
	Author: Terry
	Date: 09/08/19 15:28
	Description: 熟悉头文件中algotithm定义的count函数 
*/

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;
 
int main(int argc, char**argv)
{
	int a[10] = {0,1,2,5,4,5,4,5,4,5};
	vector<int> vec(a,a+10);
	int value = 5;
	cout<<value<<"出现的次数为："<<count(vec.begin(),vec.end(),value)<<endl;
	return 0;a
}
