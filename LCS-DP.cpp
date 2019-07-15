#include<bits/stdc++.h>
using namespace std;

int lcs(string s1 , string s2)
{
	int n = s1.length() , m = s2.length();
	
	int table[n+1][m+1];
	
	for(int i = 0 ; i<=n ; i++)
	{
		for(int j = 0 ; j<=m ; j++)
		{
			if(i == 0 || j == 0)
				table[i][j] = 0;
			else if(s1[i-1] == s2[j-1])
				table[i][j] = table[i-1][j-1] + 1;
			else
				table[i][j] = max(table[i][j-1]  , table[i-1][j] );	
				
		}
	}
	return table[m][n];
}

int main()
{
	string s1 = "AGGTAB";
	string s2 = "GXTXAYB";
	
	cout<<lcs(s1,s2);
	
	return 0;
}
