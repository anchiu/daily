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
	cout << "��ǰ�ı���a�������ǣ� " << suma << endl;
	cout << "��ǰ�ı���e�������ǣ� " << sume << endl;
	cout << "��ǰ�ı���i�������ǣ� " << sumi << endl;
	cout << "��ǰ�ı���o�������ǣ� " << sumo << endl;
	cout << "��ǰ�ı���u�������ǣ� " << sumu << endl;
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
//	int sum_a = 0,sum_e = 0,sum_i = 0,sum_o = 0,sum_u = 0; //�����Ķ���Ҫ��ಢ�ҿ��Կ������壬����ʹ�ü򵥵�a,b,c...
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
//	cout<<"Ԫ����ĸa�ĸ���Ϊ��"<<sum_a<<endl;
//	cout<<"Ԫ����ĸe�ĸ���Ϊ��"<<sum_e<<endl;
//	cout<<"Ԫ����ĸi�ĸ���Ϊ��"<<sum_i<<endl;
//	cout<<"Ԫ����ĸo�ĸ���Ϊ��"<<sum_o<<endl;
//	cout<<"Ԫ����ĸu�ĸ���Ϊ��"<<sum_u<<endl;
//}

//��Ҫ��������� �ڿ���̨���б�׼�����ʱ��һֱ�ڽ���while ���룬û����������ı�־λ
//����һ���������Ӧ����ôŪ 

