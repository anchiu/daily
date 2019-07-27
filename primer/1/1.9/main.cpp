#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int val = 0;
	int a = 50;
	while(a < 100)
	{
		val += a;
		++a;	
	} 
	std::cout << "½á¹ûÊÇ " << val << std::endl; 
	return 0;
}
