#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	int val = 10;
	int a = 0;
	
	while(a < 11)
	{
		cout << "������" << val << endl;
		--val;
		++a; 
	}
	return 0;
}

//��Ŀ��Ҫ���ӡ��0�� ��һ�δ�ӡ������1 ���ڰ�while�е��жϱ�׼��һ�¾����ˣ� 
