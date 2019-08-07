#include <iostream>
#include <string>

using std::string;
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string str, temp, strresult;
	while(std::cin >> str)
	{
		temp = str + " ";
		strresult += temp;
		std::cout << "用空格分隔开的字符串是： " << strresult << std::endl; 
	}
	return 0;
}

//逻辑上出了问题，终于调通了 啊啊啊啊啊。。。。。。 
