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
        while ( a[j] >= temp && j > i)  //Խ����С�ڻ�׼ֵ������
            j++;
        if (j > i)
        {
            a[i] = a[j];
            i++;
            
            while (a[i] <= temp && i < j)  //Խ����С�ڻ�׼ֵ������
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
    
    std::cout<< "����������: " << std::endl;     //��ʾʹ������������
    scanf  ("%d",&n);
    
    if(n > MAX_NUM) n = MAX_NUM;
    
    for(int i = 0;i < n;i++)     //����������ַŵ���������
    {
        std::cin >>i  ;
    }
    
    std::cout <<"�ҵ���׼ֵ֮��������ǣ�" << std::endl;
    quicksort(a,0,n-1) ;
    
    std::cout<< "ͨ����������֮��������ǣ�"<< std::endl;
    for (int i = 0;i < n;i++)
    {
        printf("%d",a[i]);
    }
    std::cout << std::endl;  //��һ��
    

}
