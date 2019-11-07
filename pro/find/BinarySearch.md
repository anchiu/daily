```c++
//递归版本
int BinarySearch(vector<int> v,int value,int low,int high)
{
	if (low > high)
		return -1;
	int mid =  low + (low+high) /2;
	if (v[mid] == value)
		return mid;
	else if(v[mid] >value)
		return BinarySearch(v,value,low,mid-1)
	else 
		return BinarySearch(v,value,mid+1,high)
}
```

