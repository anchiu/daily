#include <iostream>
#include <cmath>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int abscpp(int val)
{
	int res = 1;
	res = abs(val);
	return res;
}

int main(int argc, char** argv) {
	int v1;
	cin >> v1;
	int j = abscpp(v1);
	cout << "您输入的函数的实参的绝对值是： " << j << endl; 
	return 0;
}
