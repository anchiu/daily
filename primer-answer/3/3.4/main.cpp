#include <iostream>
#include <string>
#include <cstring>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using std::string ;

int main(int argc, char** argv) {
	string s1;
    string s2;	
	std::cin >> s1 >> s2;
	int i ;
	int j ;
	i = s1.length();
	j = s2.length();
	if (i != j)
	{
		if (i < j)
		{
		std::cout << "较长的字符串是： " << s2 <<std::endl;	
		}
		else 
		{
		std::cout << "较长的字符串是 ：" << s1 << std::endl; 
		}
    }
	else 
	{
		std::cout << "您所输入的两个字符串相等，长度是 " << i << std::endl; 
	}
	return 0;
}
