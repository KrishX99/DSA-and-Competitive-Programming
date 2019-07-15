#include<iostream>
using namespace std;

int fo(int *a , int n , int val)
{
	int start = 0 , end = n-1 , mid;
	while(start<=end)
	{
		mid = (start+end)>>1;
		if(a[mid] == val && ( mid==start || a[mid-1]!=val) )
			return mid;
		if(val>a[mid])
			start = mid+1;
		else
			end = mid-1;
	}
	return -1;
}

int main()
{
	int a[] = {1,1,2,2,2,2,3,3,4,4,5};
	int n = sizeof(a)/sizeof(a[0]);
	cout<<fo(a,n,2);	
	return 0;
}
