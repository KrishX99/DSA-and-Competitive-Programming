#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	
	string st = "abcabc";
	int arr[26] = {0};
	for(int i = 0 ; i<st.size() ;i++)
		arr[ st[i] - 'a' ]++;
		
	for(int i = 0 ; i<26 ; i++)	cout<<arr[i]<<" ";
	cout<<endl;
	
	int a[5];
	int sum = 0 ;
	/*
	for(int i = 0 ; i<5 ; i++)
	{
		scanf("%d" , &a[i]);
		sum += a[i];
	}
	*/
	
	char s[5];
	cin>>s;
	//char *c = strtok(s , ",");
	
	for(int i = 0 ; i<5 ; i++)	cout<<s[i]<<" ";
	cout<<"\n"<<sum;
	
	return 0;
}
