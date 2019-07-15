#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<math.h>
using namespace std;

struct node{
	int data;
	node *left;
	node *right;
};

node *newnode(int data){
	node *newnode = new node;
	newnode->data = data;
	newnode->left = newnode->right = NULL;
	
	return newnode;
}
node* tree(vector<int>arr,int start, int end) 
{ 
	if (start > end) 
	return NULL; 

	int mid = (start + end)/2; 
	node *root = newnode(arr[mid]); 

	root->left = tree(arr, start, mid - 1); 

	root->right = tree(arr, mid + 1, end); 

	return root; 
} 

void preorder(node *root , int data)
{
	queue<node *> q;
	q.push(root);
	while(!q.empty())
	{
		node *curr = q.front();
		q.pop();
		if(curr->left->data == data || curr->right->data == data)
		{
			cout<<curr->data;
			break;
		}
		if(curr->left)
			q.push(curr->left);
		if(curr->right)
			q.push(curr->right);
	}
}

void postOrder(node *root)
{
	if(root == NULL)
		return ;
	postOrder(root->left);
	postOrder(root->right);
	cout<<root->data<<" ";
}

bool isPrime(int n)
{
	for(int i = 2 ; i<=sqrt(n) ; i++)
		if(n%i == 0)
			return false;
	return true;
}

int main()
{
	vector<int>v;
	int n;
	cin>>n;
	while(n--)
	{
		int par,l,r;
		cin>>par>>l>>r;
		v.push_back(par);
		if(l!=-1)	
			v.push_back(l);
		if(r!=-1)
			v.push_back(r);
	}
	
	sort(v.begin() , v.end());
	node *root = tree(v , 0 , v.size() - 1);
	int q;
	cin>>q;
	while(q--)
	{
		int x;
		cin>>x;
		int temp = 0;
		for(int i = 0 ; i<v.size() ; i++)
		{
			if(v[i] == 1)
				continue;
			if(isPrime(v[i]))
				temp++;
			if(temp == x)
			{
				cout<<v[i]<<" ";
				temp = v[i];
				break;
				
			}
			preorder(root , temp);
			cout<<endl;
		}	
	}
	postOrder(root);
	
	return 0;
	
}
