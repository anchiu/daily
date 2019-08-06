#include <iostream>
#include <string>
#include <deque>

using namespace std;
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	deque<string> d1;
	string s1;
	cin >> s1;
	d1.push_back(s1);
	for(auto i : d1)
	{
		for (auto j : s1)
		{
			cout << j << endl;	
		}	
	}
	return 0;
}
