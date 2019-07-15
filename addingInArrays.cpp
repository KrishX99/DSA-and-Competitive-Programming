#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	int a[] = {2,4,9,12,15};
	int q;
	cin>>q;
	int b[5];
	memset(b,0,sizeof(b));
	while(q--)
	{
		int l,r,k;
		cin>>l>>r>>k;
		
		b[l] += k;
		b[r+1] += -k;
		
	}
	for(int i = 1 ; i<5 ; i++)
		b[i] += b[i-1];
	
	for(int i = 0 ; i<5 ; i++)
	{
		a[i] += b[i];
		cout<<a[i]<<" ";
	}
	return 0;
}
