//bubbleSort 最简单的冒泡算法

```c++
#include <iostream>
#include <string>

using namespace std;
int main()
{
	int i, j;
	int n[10];
	int temp;
	cout << "输入10个数，爱输不输" << endl;
    for (i = 0; i < 10; i++)
{
	cin >> n[i];
}
for (i = 0; i < 9; i++)
{
	for (j = 0; j < 9 - i; j++)
	{
		if (n[j] > n[j + 1])
		{
			temp = n[j];
			n[j] = n[j + 1];
			n[j + 1] = temp;
		}
	}
}
cout << "排完顺序就这样" << endl;
for (i = 0; i < 10; i++)
{
	cout << n[i] << endl;
}
cout << endl;
system("pause");
return 0;
}

```











```

```