#include <iostream>
#include <vector>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	vector<int> v3(10,42);
	auto b = v3.begin();
	for(auto i : v3)
	{
		cout << *b << endl;
		++b;
	}
	
	return 0;
}

//这里就举一个例子 
