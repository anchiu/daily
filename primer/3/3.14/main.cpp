#include <iostream>
#include <vector> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
using std::vector;

int val;
//int i = 0;

int main(int argc, char** argv) {
	vector<int>	 v1;
	cin >> val ;
	v1.push_back(val);
	for (auto i : v1)
	{
		cout << "现在vector中有： " << i << endl; 
    }
	return 0;
}
