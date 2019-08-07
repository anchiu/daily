#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	int x[10];
	int *p = x;
	int *ceshi ; 
 	cout << sizeof(x) / sizeof(*x) << endl;
	cout << sizeof(p) / sizeof(*p) << endl; 
	cout << sizeof(x) << endl;
	cout << sizeof(*x) << endl;
	cout <<  sizeof(p) << endl;
	cout << sizeof(*p) << endl;
	return 0;
}

