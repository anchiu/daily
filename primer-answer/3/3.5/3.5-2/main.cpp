#include <iostream>
#include <string>

using std::string;
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string str, temp, strresult;
	while(std::cin >> str)
	{
		temp = str + " ";
		strresult += temp;
		std::cout << "�ÿո�ָ������ַ����ǣ� " << strresult << std::endl; 
	}
	return 0;
}

//�߼��ϳ������⣬���ڵ�ͨ�� ���������������������� 
