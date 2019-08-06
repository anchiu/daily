#include <iostream>
#include <vector>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool compare(vector<int>& v3,vector<int>& v4)
{
	if(v3 == v4)
		return true;
	else 
		return false;
}

int main(int argc, char** argv)
{
	vector<int> v1 = {1,2,3,4,5};
	vector<int> v2 = {1,2,3,4,5};

	bool i = compare(v1,v2);
	cout << i << endl;
	return 0;
}
