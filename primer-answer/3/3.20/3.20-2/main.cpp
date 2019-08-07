#include <iostream>
#include <vector>

using namespace std;
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i;
	int k;
	vector<int> v1;
	while(cin >> i)
		v1.push_back(i);
	int size = v1.size();  
//	auto b = v1.begin(), e = v1.end();
	for (k = 0; k != size; ++k)
	{
	   	int result = v1[k] + v1[size -1 - k];
		cout << result << endl;
	}
	return 0;
}


