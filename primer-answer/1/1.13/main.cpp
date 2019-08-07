#include <iostream>
#include <cmath>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int v1 ,v2;
	
	std::cout << "请输入两个整数，将会显示两个整数之间所有的整数：" << std::endl;
	std::cin >> v1 >> v2;
	
	int i;
	int j = abs(v1-v2);
//	std::cout << j << std::endl;
	if (v1 < v2)
	{
		for (i = 0;i < j; i++)
		{
			std::cout << "当前数字是： " << v1 << std::endl; 
			v1++;
//			i++;
		}
	}
	else
	{
		for (i = 0;i < j; ++i)
		{
			std::cout << "当前数字是：" << v1 << std::endl;
			--v1;
//			--i; 
		}
	}
	return 0;
}

//while语句改成for语句里面的 i没有该过来，耽误了很长时间 
