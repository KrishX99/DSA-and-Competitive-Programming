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
		cin>>s;
		for(int i = n- 1 ; i>= 0 ; i--)
		{
			if( (i == s.size() - 1) && s[i] == '>')
				continue;
			if( (i == 0 && s[i] == '<' ) || s.size() == 1)
				break;
			if(s[i] == '>')
				s.erase(s.begin() + i+1);
			else
				s.erase(s.begin() + i - 1);
		
		}
		if(s.size()!=1)
			cout<< s.size() - 1<<endl;
		else
			cout<<0<<endl;
	}
	return 0;
}
