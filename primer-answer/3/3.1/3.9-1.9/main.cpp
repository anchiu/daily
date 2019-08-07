#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std; 

int main(int argc, char** argv) {
	int val = 0;
	int a = 50;
	while(a < 100)
	{
		val += a;
		++a;	
	} 
	cout << "½á¹ûÊÇ " << val << endl; 
	return 0;
}
