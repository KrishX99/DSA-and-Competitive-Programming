#include<iostream>
using namespace std;

int digitSum(int n)
{
	if(n>0 && n<=9)
		return n;
	int temp = 0;
	while(n!=0)
	{
		temp += n%10;
		n /=10;
	}
	digitSum(temp);
}

int main()
{
	int n ;
	cin>>n;
	cout<<digitSum(n);
	
	return 0;
}
