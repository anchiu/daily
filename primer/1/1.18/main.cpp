#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int currVal = 0; 
	int val = 0;
	if (std::cin >> currVal) 
	{
		int cnt = 1;
		while (std::cin >> val)
		{
			if(val == currVal)
			{
				cnt++;
			}
			else
			{
				std::cout << currVal << " occurs " << cnt << " times. " << std::endl;
				currVal = val;
				cnt = 1;
			}
		}	
		std::cout << currVal << " occurs " << cnt << " times. " << std::endl;
	} 
	return 0;
}


// ������� ��ostream����������ַ��������������Ӹ��ո�Ҫ��Ȼ�����ʱ����һ��ֵֹġ� 
