#include <iostream>
#include <vector> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	vector<int> v1 = {0,1,2,3,4,5,6,7,8,9};
	auto b = v1.begin();
	auto e = v1.end();
	
	for(auto &i : v1)
	{
		
		++i = i*2;
		
	}
	for (auto j : v1)
	{
		cout << j << endl;
	 } 
	
	return 0;
}
