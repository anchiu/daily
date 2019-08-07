#include <iostream>
#include <forward_list>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	forward_list<int> f1 = {1,2,3,4,5,6,7,8,9};
	auto it = f1.begin();
	while(it != f1.end())
	{
		if (*it % 2)
			it = f1.erase(it);
		else
			++it; 
	}
	for (auto i : f1)
	{
		cout << i << endl;
	}
	return 0;
}
