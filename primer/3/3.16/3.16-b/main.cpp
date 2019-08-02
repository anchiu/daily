#include <iostream>
#include <vector> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	vector<int> v2(10);
	cout << "vector中的元素是";
	for (auto i : v2)
		cout << i << ""; 
    cout << endl;
	return 0;
}
