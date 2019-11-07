#include <iostream>
#include <string>

using namespace std;

void quicksort( int* a, int p,int q)
{
    int i = p;
    int j = q;
    int temp = a[p];
    
    while (i < j) 
    {
        while ( a[j] >= temp && j > i)  //越过不小于基准值的数据
            j++;
        if (j > i)
        {
            a[i] = a[j];
            i++;
            
            while (a[i] <= temp && i < j)  //越过不小于基准值的数据
            if (i < j)
            {
                a[j] = a[i];
                j--;
            }
        }
    }
    a[i] = temp;
    
    for (int k =p; k <= q; k++)
    {
        if (k ==i)
        {
            printf("(%d)",a[k]);
            continue;
        }
    printf ("%d",a[k]);
    
    }
    printf ("\n");
    
    if (p < (i-1)) quicksort(a,p,i-1);
    if ((j+1) < q) quicksort(a,j+1,q);
    
}
int MAX_NUM = 100;

int main()
{
    int a[MAX_NUM];
    int n;
    
    std::cout<< "请输入数字: " << std::endl;     //提示使用者输入数字
    scanf  ("%d",&n);
    
    if(n > MAX_NUM) n = MAX_NUM;
    
    for(int i = 0;i < n;i++)     //把输入的数字放到数组里面
    {
        std::cin >>i  ;
    }
    
    std::cout <<"找到基准值之后的序列是：" << std::endl;
    quicksort(a,0,n-1) ;
    
    std::cout<< "通过快速排序之后的序列是："<< std::endl;
    for (int i = 0;i < n;i++)
    {
        printf("%d",a[i]);
    }
    std::cout << std::endl;  //空一行
    

}
