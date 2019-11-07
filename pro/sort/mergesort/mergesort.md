## 二路归并排序

```c++
#include <iostream>

using namespace std;

//将子序列归并为一个完整序列
void Merge(int* a, int first, int mid, int last, int* res)
{
    //将a[first mid] a[mid+1 last]排序合并
    int first_start = first, first_end = mid;
    int second_start = mid + 1, second_end = last;
    int res_index = 0;
    while (first_start <= mid && second_start <= last)
    {
        if (a[first_start] < a[second_start])
            res[res_index++] = a[first_start++];
        else
            res[res_index++] = a[second_start++];
    }

    while (first_start <= mid)
        res[res_index++] = a[first_start++];

    while (second_start <= last)
        res[res_index++] = a[second_start++];

    //拷贝回原来的空间
    for (int i = 0; i < res_index; i++)
        a[first + i] = res[i];
}

//递归不断划分区间
void merge_sort(int* a, int first, int last, int* res)
{
    if (first >= last)
        return;

    int mid = (first + last) / 2;
    merge_sort(a, first, mid, res);     //左边有序    
    merge_sort(a, mid + 1, last, res);  //右边有序    
    Merge(a, first, mid, last, res);    //将左右两个有序数列进行排序归并
}


bool MergeSort(int a[], int n)
{
    int *res = new int[n];
    if (res == NULL)
        return false;
    merge_sort(a, 0, n - 1, res);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    delete[] res;
    return true;
}


int main()
{
    int a[] = {3,2,5,9,2};
    MergeSort(a, sizeof(a) / sizeof(a[0]));

    system("pause");
    return 0;
}

```

