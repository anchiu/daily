#include <iostream>
#include <cmath>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
 
int main(int argc, char** argv) {
    int v1,v2;
    int i = 0;
	int j;
	int val;

//    std::cout << j << std::endl;
	cout << "在下面输入两个整数，将为你显示两个整数中间的所有的整数 ：" <<endl;
	cin >> v1 >> v2 ;
	j = abs (v1-v2);
	if (v1 < v2)
	{
		while (i < j)
		{
			cout << "当前数字是: " << v1 << endl;
			++i; 
			++v1;
		}
	} 
	else 
	{
		while(i < j)
		{
			cout << "当前数字是 " << v1 << endl; 
			++i;
			--v1;
		}
	}
	return 0;
}
