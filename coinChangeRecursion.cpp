#include<iostream>
using namespace std;

int count(int *s , int n , int k)
{
	if(k == 0)
		return 1;
	if(k<0)
		return 0;
	if(n<=0 && k >= 1)
		return 0;
	
	return count(s , n , k - s[n-1] ) + count( s , n-1 , k);
}

int main()
{
	int s[] = {1,2,3};
	int n = sizeof(s)/sizeof(s[0]);
	
	cout<<count(s,n,5);
	
	return 0;
}
