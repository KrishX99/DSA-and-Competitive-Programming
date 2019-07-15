//maximum area under histogram
#include<iostream>
#include<stack>
using namespace std;

int maxArea(int *a , int n)
{
	stack<int>s;
	int max_area = 0 ;
	int tos;
	int area_with_top;
	
	int i = 0 ;
	while(i<n)
	{
		if(s.empty() || a[s.top()]<=a[i])
			s.push(i++);
		else
		{
			int temp = s.top();
			s.pop();
			//area_with_top = a[temp] * (s.empty()? i : i-s.top() - 1);
			
			if(s.empty())
				area_with_top = a[temp] * i;
			else
				area_with_top = a[temp] * (i-s.top() - 1);
			
			if(area_with_top>max_area)
				max_area = area_with_top;
		}
	}
	while(!s.empty())
	{
		int temp = s.top();
		s.pop();
		//area_with_top = a[temp] * (s.empty() ? i : i-s.top() - 1);
		
		if(s.empty())
				area_with_top = a[temp] * i;
			else
				area_with_top = a[temp] * (i-s.top() - 1);
		
		if(area_with_top>max_area)
			max_area = area_with_top;
	}
	
	return max_area;
}
int main()
{
	int a[] = {6,2,5,4,5,1,6};
	int n = sizeof(a)/sizeof(a[0]);
	cout<<maxArea(a,n);
		
	return 0;
}
