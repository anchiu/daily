/*
	Name: prac10.1
	Copyright: 
	Author: Terry
	Date: 09/08/19 15:28
	Description: ��Ϥͷ�ļ���algotithm�����count���� 
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
	cout<<value<<"���ֵĴ���Ϊ��"<<count(vec.begin(),vec.end(),value)<<endl;
	return 0;a
}
