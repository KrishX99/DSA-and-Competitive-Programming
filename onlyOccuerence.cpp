#include<iostream>
using namespace std;

int findIndex(int *a , int n)
{
	int start = 0 , end = n-1 , mid;
	while(start <=end)
	{
		mid = (start+end)>>1;
		if( (a[mid]!=a[mid-1] && a[mid]!=a[mid+1]) || start == end)
			return a[mid];
		else if(mid&1 && a[mid]== a[mid-1])
			start = mid+1;
		else
			end = mid-1;
		
	}
}


int main()
{
	int a[] = {1,1,2,2,3,4,4,5,5,6,6};
	
	int n = sizeof(a)/sizeof(a[0]);
	
	cout<<findIndex(a,n);
	
	return 0;
}

