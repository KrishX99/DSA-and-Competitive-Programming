#include<iostream>
using namespace std;

int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int count = 1;
		int i , j;
		cin>>i>>j;
		
		for(int x = i ; x<=j  ;x++)
		{
			int temp = x , n = 1;
			while(temp!=1)
			{
				if(temp&1)
					temp = temp*3 + 1;
				else
					temp = temp/2;
				n++;
			}
			count = max(n , count);
		}
		
		cout<<i<<" "<<j<<" "<<count;
	}
	
	return 0;
}


