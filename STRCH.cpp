#include<iostream>
using namespace std;

int main()
{
	
	int test;
	cin>>test;
	while(test--)
	{
		int n;
		cin>>n;
		string s;
		char c;
		cin>>s>>c;
		
		int pos = 0;
		
		int total = 0;
		
		for(int i = 0 ; i<n ; i++)
		{
			if(s[i] == c)
			{
				total += ( (i-pos)*(i-pos+1) )/2;
				pos = i+1;
			}else 
			if(i == n && s[i]!=c)
				total += ( (i-pos+1)*(i-pos+2) )/2;
		}
		cout<< (n*(n+1))/2 - total<<endl;
	}
	
	return 0;
}
