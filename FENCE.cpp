#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	int test;
	cin>>test;
	while(test--){
		int m,n,k;
		cin>>n>>m>>k;
		
		int a[n+1][m+1];
		memset(a, 0 ,sizeof(a));
		
		while(k--)
		{
			int r,c;
			cin>>r>>c;
			a[r][c] = 1;
		}
		
		int count = 0;
		
		for(int i = 1 ; i<=n ; i++)
		{
			for(int j = 1 ; j<=m ; j++ )
			{
				if(a[i][j] ==1)
				{
					if( a[i-1][j] == 0 || i == 1)	count++;
					if( a[i+1][j] == 0 || i == n)	count++;
					if( a[i][j-1] == 0 || j == 1 )	count++;
					if( a[i][j+1] == 0 || j == m )	count++; 
				}
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
