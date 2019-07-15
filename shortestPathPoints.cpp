#include<bits/stdc++.h>
using namespace std;

struct point{
	int x,y;
};

int shortestPath(point p1 , point p2)
{
	int absx = abs(p1.x - p2.x);
	int absy = abs(p1.y - p2.y);
	
	return max(absx,absy);
}

int coverPoints(point p[] , int n )
{
	int count = 0;
	
	for(int i = 0 ; i<n-1 ; i++)
	{
		count += shortestPath(p[i] , p[i+1]);
	}
	return count;
}

int main()
{
	point p[] = { { 4, 6 }, { 1, 2 }, { 4, 5 }, { 10, 12 } };
	int n = sizeof(p)/sizeof(p[0]);
	
	cout<<coverPoints(p,n);
	
	return 0 ;
}
