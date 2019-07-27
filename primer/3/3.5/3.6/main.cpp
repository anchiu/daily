/*
	Name: 替换字符串中的字符 
	Copyright: 
	Author: Terry 
	Date: 27/07/19 21:58
	Description: 
*/
#include <iostream>
#include <string>

using std::string;
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
char c;
int i;

int main(int argc, char** argv) {
	string str; //需要判断的字符串是 str 
	while(std::cin >> str)
	{
		for (auto &c : str)
		{
			//std::cout << c << std::endl;
			str[c] = "X";	
		}	
	std::cout << "当前的字符串是： " << str << std::endl; 
	}
		
	return 0;
}
