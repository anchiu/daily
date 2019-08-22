// ReplaceBlank.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>

using namespace std;

void ReplaceBlank(char string[], int length)
{
	if (string == nullptr || length <= 0)
	{
		return;
	}

	/*originalLength是字符串实际长度*/
	int originalLength = 0;
	int numberOfBlank = 0;
	int i = 0;
	while (string[i] != 0)
	{
		++originalLength;

		if (string[i] == ' ')
		{
			++numberOfBlank;
		}
		++i;
	}
	/*newLength是字符串变化之后的长度*/
	int newLength = originalLength + numberOfBlank * 2;
	
	if (newLength > length)
		return;
	
	int indexOfOriginal = originalLength;
	int indexOfNew = newLength;

	while (indexOfOriginal > 0 && indexOfNew > indexOfOriginal)
	{
		if (string[indexOfOriginal] == ' ')
		{
			string[indexOfOriginal--] = '0';
			string[indexOfOriginal--] = '2';
			string[indexOfOriginal--] = '%';

		}
		else
			string[indexOfNew] = string[indexOfOriginal];
		--indexOfOriginal;
	}




}
int main()
{
    std::cout << "Hello World!\n"; 
}

