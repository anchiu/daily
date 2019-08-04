#include <iostream>
#include <string>
#include <vector>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	vector<string> v1;
	string s1;
	string s2 = "over";
	while (cin >> s1 && s1 != s2)
	{
		v1.push_back(s1);
	}	
	for (auto i : v1)
	{
		cout << "µ±Ç°×Ö·ûÊÇ£º " << i << endl; 
	}
	return 0;
}
