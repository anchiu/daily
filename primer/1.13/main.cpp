#include <iostream>
#include <cmath>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int v1 ,v2;
	
	std::cout << "����������������������ʾ��������֮�����е�������" << std::endl;
	std::cin >> v1 >> v2;
	
	int i;
	int j = abs(v1-v2);
//	std::cout << j << std::endl;
	if (v1 < v2)
	{
		for (i = 0;i < j; i++)
		{
			std::cout << "��ǰ�����ǣ� " << v1 << std::endl; 
			v1++;
//			i++;
		}
	}
	else
	{
		for (i = 0;i < j; ++i)
		{
			std::cout << "��ǰ�����ǣ�" << v1 << std::endl;
			--v1;
//			--i; 
		}
	}
	return 0;
}

//while���ĳ�for�������� iû�иù����������˺ܳ�ʱ�� 
