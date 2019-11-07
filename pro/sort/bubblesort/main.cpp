#include <iostream>
#include <vector>

using namespace std;

template<typename Comparable>
void BubbleSort(vector<Comparable> &a)
{
    int temp;
    int j;
    for (int i = 0;i < a.size();++i)
    {
        for (j = 0;j < a.size() - i - 1;++j)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
//------------------------BubbleSort-end------------------

int main()
{
    int i;
    vector<int> a ;
	while (cin >> i)
		a.push_back(i);
    BubbleSort(a);
    for (auto c : a)
    {
        cout << c<<endl;

    }
    return 0;

}

