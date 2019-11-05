#pragma once
#include <iostream>
using namespace std;
class mycomplex {
public:
	mycomplex(int a, int b):shibu(a),xubu(b) {
		
	}
	mycomplex() {

	}
	mycomplex(int a, int b, int c) {
		this->shibu = a;
		this->xubu =b;
		this->la = c;
	}
	void show() {
		cout << "实部为"<<shibu<<"虚部为" << xubu<<endl;
	}
private:
	int shibu;
	int xubu;
	int la;
};