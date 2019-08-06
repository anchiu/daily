#include <iostream>
#include <vector>
#include <list>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool compare(list<int>& v3, list<int>& v4)
{
	if(v3 == v4)
		return true;
	else 
		return false;
}

int main(int argc, char** argv)
{
	list<int> v1 = {1,2,3,4,5};
	list<int> v2 = {1,2,3,4,5};

	bool i = compare(v1,v2);
	cout << i << endl;
	return 0;
}
