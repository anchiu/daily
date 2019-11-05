#include <iostream>
#include <vector>
#include <string>
#include "mycomplex.h"
using namespace std;

int main() {
	string s1;
	shared_ptr<string> p1;
	
	auto p = make_shared<int>(42);
	if (!p1) 
		cout << "空指针"<< endl;

	mycomplex a;
	mycomplex b(1, 2);
	b.show();
	mycomplex c(1, 2, 4);
	c.show();
	
}
