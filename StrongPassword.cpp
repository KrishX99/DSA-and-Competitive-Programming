#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int flagl = 0 , flagu = 0 , flags = 0 , flagd = 0;
	for(int i = 0 ; i<n ; i++)
	{
		if(isupper(s[i]))
			flagu = 1;
		else if(islower(s[i]))
			flagl = 1;
		else if(isdigit(s[i]))
			flagd = 1;
		else
			flags = 1;
			
	}
	int total = flagu + flagl + flags + flagd;
	if(	total!=4)
	{
		if(n>=6)
			cout<<4-total;
		else
		{
			int ans = 4-total+6-n-1;
			cout<<ans;
		}
	}
	else
		cout<<0;
	return 0;
}
