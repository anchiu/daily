#include <iostream>
#include <string>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using std::string;
using namespace std;

int main(int argc, char** argv) {
	string str;
	string strresult;
	while (std::cin >> str)
	{
		strresult += str;
		cout << "���Ӻõ��ַ����ǣ� " << strresult << endl;			
	}
		
	return 0;
}
