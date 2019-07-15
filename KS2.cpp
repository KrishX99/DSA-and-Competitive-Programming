#include<bits/stdc++.h>
using namespace std;

int main(){
	cout<<1;
	long long arr[1000000000000000000+1];
	memset(arr , 0 , sizeof(arr));
	
	for(long long i = 15 ; i<1000000000000000001 ; i++){
		long long temp = i ;
		int sum = 0 ;
		while(temp>0){
			sum += temp%10;
			temp /= 10;
		} 
		if(!sum%10)
			arr[i] = 1;
	}
	int test;
	cin>>test;
	while(test--){
		long long n;
		cin>>n;
		int track = 0;
		for(long long i = 0 ; i<1000000000000000000+1 ; i++)
		{
			if(track == n)
			{
				cout<<i<<endl;
				break;
			}
			if(arr[i])
				track++;
		}
	}
	
	return 0;
}
