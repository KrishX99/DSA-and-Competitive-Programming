#include<iostream>
#include<set>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i = 0 ; i<n ; i++)	cin>>a[i];
	sort(a, a+n);
	int MAX = 0;
	
	for(int i = 0 ; i<n-1 ; i++)
		if(a[i]%a[i+1] > MAX)
			MAX = a[i]%a[i+1];
			
	cout<<MAX;
	
	return 0;
}
