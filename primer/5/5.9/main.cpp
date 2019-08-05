#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	int suma,sume,sumi,sumo,sumu;
	string  c;
	while(cin >> c)
	{
		for (auto i : c)
		{
		
			if (i == 'a')
			{
				++suma;
			}
			else if (i == 'e')
			{
				++sume;
			}
			else if (i == 'i')
			{
				++sumi;
			}
			else if (i == 'o')
			{
				++sumo;
			}
			else if (i == 'u')
			{
				++sumu;
			}
		}
	}
	cout << "当前文本中a的数量是： " << suma << endl;
	cout << "当前文本中e的数量是： " << sume << endl;
	cout << "当前文本中i的数量是： " << sumi << endl;
	cout << "当前文本中o的数量是： " << sumo << endl;
	cout << "当前文本中u的数量是： " << sumu << endl;
	return 0;
}


//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//int  main()
//{	
//	char cval;
//	
//	int sum_a = 0,sum_e = 0,sum_i = 0,sum_o = 0,sum_u = 0; //变量的定义要简洁并且可以看出含义，切勿使用简单的a,b,c...
//	while (cin >> cval)
//	{
//		if (cval == 'a')
//		{
//			sum_a++;
//		}
//		else if (cval == 'e')
//		{
//			sum_e++;
//		}
//		else if (cval == 'i')
//		{
//			sum_i++;
//		}
//		else if (cval == 'o')
//		{
//			sum_o++;
//		}
//		else if (cval == 'u')
//		{
//			sum_u++;
//		}
//	}
//	cout<<"元音字母a的个数为："<<sum_a<<endl;
//	cout<<"元音字母e的个数为："<<sum_e<<endl;
//	cout<<"元音字母i的个数为："<<sum_i<<endl;
//	cout<<"元音字母o的个数为："<<sum_o<<endl;
//	cout<<"元音字母u的个数为："<<sum_u<<endl;
//}

//主要问题出现在 在控制台进行标准输入的时候，一直在进行while 输入，没有输入结束的标志位
//我想一下这个问题应该怎么弄 

