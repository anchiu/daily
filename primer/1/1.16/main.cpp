#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int val = 0, sum = 0;
	std::cout << "在此处输入数字 ：" << std::endl; 
	while (std::cin >> val)

		sum +=  val;
	
	std::cout << "所有数相加一起的和是： " << sum << std::endl; 
	return 0;
}



//这个程序输入数字按回车并不能直接显示结果，而是要输入非数字的文本，不知道怎么改进。 
