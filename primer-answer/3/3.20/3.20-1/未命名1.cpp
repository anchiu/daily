#include <iostream>
#include <vector>

using namespace std;

int main ()
{
	vector<int> v1;
	int i,k;
	while(cin >> i)
		v1.push_back(i);
	for (auto j : v1)
	{
		int result = j + (j+1);
		cout << result <<endl;
	}
		
} 
