#include <iostream>
#include <cmath>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    int v1,v2;
    int i = 0;
	int j;
	int val;

    std::cout << j << std::endl;
	std::cout << "����������������������Ϊ����ʾ���������м�����е����� ��" <<std::endl;
	std::cin >> v1 >> v2 ;
	j = abs (v1-v2);
	if (v1 < v2)
	{
		while (i < j)
		{
			std::cout << "��ǰ������: " << v1 << std::endl;
			++i; 
			++v1;
		}
	} 
	else 
	{
		while(i < j)
		{
			std::cout << "��ǰ������ " << v1 << std::endl; 
			++i;
			--v1;
		}
	}
	return 0;
}
