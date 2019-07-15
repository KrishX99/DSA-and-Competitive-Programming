#include<iostream>
#include<stack>
#include<cstring>
using namespace std;

int areaUnderHistogram(int *a , int n)
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
			area_with_top = a[temp] * (s.empty()? i : i-s.top() - 1);
			
			
			if(area_with_top>max_area)
				max_area = area_with_top;
		}
	}
	while(!s.empty())
	{
		int temp = s.top();
		s.pop();
		area_with_top = a[temp] * (s.empty() ? i : i-s.top() - 1);
		
		if(area_with_top>max_area)
			max_area = area_with_top;
	}
	
	return max_area;
}

int calcMaxArea(int a[5][6] , int m , int n)
{
	if(m == 0 )
		return 0;
	if(n==0)
		return 0;
		
	int histogram[n];
	memset(histogram ,  0 , sizeof(histogram));
	
	for(int i = 0 ; i<m ; i++)
	{
		for(int j = 0 ; j<n ; j++)	
		{
			if(a[i][j] > 0)
				histogram[j] += a[i][j];
			else
				histogram[j] = 0;
		}
	} 
	
	return areaUnderHistogram(histogram , n);
}

int main()
{
	int matrix[5][6]={ {1,0,1,1,1,1 } , { 0,1,1,1,1,1 }, {0,1,1,0,1,1 }, { 0,0,1,1,1,1 }, { 1,0,1,1,0,1 } };
	
	cout<<calcMaxArea(matrix , 5, 6);
	return 0;
}
