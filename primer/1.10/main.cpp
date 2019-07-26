#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int val = 10;
	int a = 0;
	
	while(a < 11)
	{
		std::cout << "现在是" << val << std::endl;
		--val;
		++a; 
	}
	return 0;
}

//题目上要求打印到0， 第一次打印出来到1 ，在把while中的判断标准该一下就行了； 
