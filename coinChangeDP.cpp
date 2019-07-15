#include<iostream>
using namespace std;

int count(int *s , int n , int k)
{
	int x , y ;
	
	int table[k+1][n];
	
	for(int i = 0 ; i<n ; i++)
		table[0][i] = 1;
	
	for(int i = 1 ; i<k+1 ; i++)
	{
		for(int j = 0 ; j<n ; j++)
		{
			x = (i-s[j]>=0) ? table[i - s[j]][j] : 0;
			y = (j>=1) ? table[i][j-1] : 0;
			
			table[i][j] = x+y;
		}
	}
	return table[k][n-1];
}

int main(){
	
	int s[] = {1,3,5};
	int n = sizeof(s)/sizeof(s[0]);
	
	cout<<count(s,n,5);
	
	return 0;
}
