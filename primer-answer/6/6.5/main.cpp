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
	cout << "������ĺ�����ʵ�εľ���ֵ�ǣ� " << j << endl; 
	return 0;
}
