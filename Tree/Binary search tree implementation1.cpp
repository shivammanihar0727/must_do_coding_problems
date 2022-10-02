#include<bits/stdc++.h>
using namespace std;
struct Bstnode{
	int data;
	Bstnode *left;
	Bstnode *right;
};
Bstnode *GetNewNode(int data)
{
	Bstnode *newnode=new Bstnode();
	newnode->data=data;
	
	newnode->left=newnode->right=NULL;
	return newnode;
	
}
Bstnode *Insert(Bstnode *root,int data)
{
	if(root==NULL)
	{
		root=GetNewNode(data);
		
	}
	else if(data<=root->data)
	{
		root->left=Insert(root->left,data);
	}
	else
	{
		root->right=Insert(root->right,data);
	}
	return root;
}
void display(Bstnode *root)
{
	Bstnode *t=root;
	
    if (root) {
    	display(t->left);
        cout << t->data << " ";
        display(t->right);
    
    
    }
}

bool search(Bstnode *root,int data)
{
	if(root==NULL)
		 return false;
	else if(root->data==data)
		return true;
	else if(data<=root->data)
		return search(root->left,data);
	else 
		return search(root->right,data);
}


int main()
{
	Bstnode *root=NULL;
	int n,a,i;
	cout<<"Enter no. of nodes you want = ";
	cin>>n;
	cout<<"Enter the value of all the nodes = \n";
	for(i=0;i<n;i++)
	{
		cin>>a;
		root=Insert(root,a);
	}
	cout<<"Enter element to be searched = ";
	int ele;
	cin>>ele;
	bool check=search(root,ele);
	if(check)
		cout<<"Element found\n";
	else
		cout<<"Element not found\n";
		
	cout<<"your Binary tree element are\n";
	display(root);
//	root=Insert(display,5);
//	root=Insert(root,6);
//	root=Insert(root,2);
	
}
