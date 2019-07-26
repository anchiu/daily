#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	std::cout << "/*";
	std::cout << "*/";
//	std::cout << /* "*/" */;
//只有上面这句编译错误，就是语法错误。 
	std::cout << /* "*/" /* "/*" */ ;
	return 0;
}
//
