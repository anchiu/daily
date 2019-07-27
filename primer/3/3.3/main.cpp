#include <iostream>
#include <string>

using std::string;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string s1, s2;
	std::cin >> s1 >> s2;
	std::cout << "连接之后的字符串是： " << s1 + s2 << std::endl; 
	return 0;
}
