#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int currVal = 0; 
	int val = 0;
	if (std::cin >> currVal) 
	{
		int cnt = 1;
		while (std::cin >> val)
		{
			if(val == currVal)
			{
				cnt++;
			}
			else
			{
				std::cout << currVal << " occurs " << cnt << " times. " << std::endl;
				currVal = val;
				cnt = 1;
			}
		}	
		std::cout << currVal << " occurs " << cnt << " times. " << std::endl;
	} 
	return 0;
}


// 在输出流 （ostream）中输出的字符串最好左右两面加个空格，要不然输出的时候挨在一起怪怪的。 
