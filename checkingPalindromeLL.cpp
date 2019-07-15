#include<iostream>
using namespace std;

struct node{
	int data;
	node *next;
}*head = NULL , *head2 = NULL;

void insert(int data)
{
	node *newnode = new node;
	newnode->next = NULL;
	newnode->data = data;
	if(head == NULL)
		head = newnode;
	else
	{
	node *curr = head;
	while(curr->next)
		curr = curr->next;
	curr->next = newnode;
	}
}

void display()
{
	node *curr = head;
	while(curr){
		cout<<curr->data<<" ";
		curr = curr->next;
	}
}


bool checkPalindrome(node *head)
{
	if(head == NULL)
		return true;
	node *curr = head;
	int count = 0;
	while(curr)
	{
		count++;
		curr = curr->next;
	}
	int mid = count/2;
	int m = 0;
	node *ptr = head , *ptr2;
	while(ptr)
	{
		m++;
		if(m == mid)
		{
			ptr2 = ptr->next;
			ptr->next = NULL;
			break;
		}
		ptr = ptr->next;
	}
	curr = ptr2 ; 
	node *prev = NULL , *next = NULL;
	while(curr)
	{
		next = ptr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	node *newhead = prev;
	head2 = ptr2;
	node *curr2 = newhead;
	curr = head;

	while(curr)
	{
		if(curr->data != curr2->data)
			return false;
		curr = curr->next;
		curr2 = curr2->next;
	}
	return true;
}

int main()
{
	
	insert(1);
	insert(2);
	insert(3);
	insert(2);
	insert(1);
	display();
	
	cout<<checkPalindrome(head);
	return 0;
}
