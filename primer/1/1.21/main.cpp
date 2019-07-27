#include <iostream>
#include "Sales_item.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Sales_item item1,item2;
	std::cin >> item1 >> item2 ;
	std::cout << item1 + item2 << std::endl;
	return 0;
}


