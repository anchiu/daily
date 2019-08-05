#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int fact(int val)
{
	int res = 1;
	while(val > 1)
	{
		res *= val--;
	}
	return res;
}

int main(int argc, char** argv) {
	int v1;
	cin >> v1;
	int j = fact (v1);
	cout << "您输入的数字的阶乘是： " << j << endl; 
	return 0;
}
