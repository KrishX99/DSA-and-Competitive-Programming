#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin>>test;
	while(test--){
		double d;
		cin>>d;
		string s;
		cin>>s;
		
		int needed = ceil(d * 0.75);
		int p = 0;
		for(int i = 0 ; i<d ; i++){
			if(s[i] == 'P')
				p++;
		}
		int track = 0 ;
		for(int i = 2 ; i<d-2 ; i++){
			if(p >= needed)
			{

				break;
			}
			if( s[i] == 'A' && (s[i-1] == 'P' || s[i-2] == 'P') && (s[i+1] == 'P' || s[i+2] == 'P') )
			{
				track++;
				p++;
			} 
		}
		cout<<needed<<endl;
		if(p!=needed)
			cout<<-1<<endl;
		else
			cout<<track<<endl;
	}
	return 0;
}
