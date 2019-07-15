#include<iostream>
using namespace std;

void f1(char *st = "HELLO WORLD")
{
	cout<<st;
}

int main()
{
	f1("THIS IS A PROGRAM");
	f1();
	return 0;
}
