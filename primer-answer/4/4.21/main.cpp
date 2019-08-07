#include <iostream>
#include <vector>

using namespace std;
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	vector<int> v1 = {1,2,3,4,5,6,7,8,9};
	for (auto &i :v1)
	{
		int res = i %2;
		if (res)
		{
			i *= 2;
		}
	}
	for (auto i : v1)
	{
		cout << i << endl;
	}
	return 0;
}

//很快结束的一道题 
