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
//char c;
int i;
int j;

int main(int argc, char** argv) {
	string str; //需要判断的字符串是 str 
	
	while(std::cin >> str)
	{
		j = str.length();
		for (i = 0; i < j ; ++i)
		{
			//std::cout << c << std::endl;
			str[i] = 'X';
			//std::cout << "1" << std::endl;	
		}	
	std::cout << "当前的字符串是： " << str << std::endl; 
	}
		
	return 0;
}

//碰到了一个问题卡了好久，最后在网上搜到了答案
//https://stackoverflow.com/questions/12026567/error-invalid-conversion-from-const-char-to-char-fpermissive 
