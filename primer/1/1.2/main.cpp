#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	std::cout << "Enter two numbers:" << std:: endl;
	int v1 = 0,v2 = 0;
	std::cin >> v1 >> v2;
	std::cout << "The sum is "<< v1 << "and" << v2 << "is" <<v1 +v2 << std::endl;
	return 0;
}
