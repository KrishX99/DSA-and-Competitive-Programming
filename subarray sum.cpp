#include<iostream>
using namespace std;

int main()
{
	int a[] = {3,6,2,9,10,3};
	int n = sizeof(a)/sizeof(a[0]);
	int i = 0,j = 0 , k = 21;
	int sum = 0 , flag = 0;
	while(i<n)
	{
		if(sum>k)
		{
			sum -=a[i];
			i++;
		}
		else
		{
			sum += a[j];
			j++;
		}
		
		if(sum == k)
			flag = 1
		
	}
	if(flag)
		cout<<1;
	else
		cout<<0;
}
