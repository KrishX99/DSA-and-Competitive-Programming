#include<bits/stdc++.h>
using namespace std;

double square_root(double n)
{
	double start = 2 , end = n/2 ;
	double mid;
	while(start<=end)
	{
		mid = (double)(start+end)/2;
		if(mid*mid==n)
			return mid;
		if(mid*mid>n)
			end = mid-1;
		else
			start = mid+1;
	}
	return (mid);
}

int main()
{
	cout<<square_root(16.05);
	return 0;
	
	
}
