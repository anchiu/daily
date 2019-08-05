#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int fact (int val)
{
	int res = 1;
	while(val > 1)
	{
		res *= val--;	
	} 
	return res;
}

int main(int argc, char** argv) {
	int i = fact (6);
	cout << "6µÄ½×³ËÊÇ: " << i << endl;
	return 0;
}
