#include<bits/stdc++.h>
using namespace std;
class node {
	public:
	int a;
	node *left;
	node *right;
};

void levelorder(node *root)
{
	if(root==NULL)
	return;
	queue<node*> q;
	q.push(root);
	int i=0;
	while(!q.empty()){
		node* curr=q.front();
		cout<<curr->a<<" i = "<<i++<<endl;
		if(curr->left!=NULL)
		q.push(curr->left);
		
		if(curr->right!=NULL)
		q.push(curr->right);
		q.pop();
	}
}

int main()
{
	int n;
	int i;
	node *root,*p,*q;
	cout<<"enter number of nodes= ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			p=new node();
			cin>>p->a;
			p->left=NULL;
			p->right=NULL;
			q=p;
			root=p;
		}
		else
		{
			p=new node();
			cin>>p->a;
			p->left=NULL;
			p->right=NULL;
			q=root;
			while(1)
			{
				if(p->a>q->a)
				{
					if(q->right==NULL)
					{
						q->right=p;
						break;
					}
					else
					{
						q=q->right;
					}
				}
				else
				{
					if(q->left==NULL)
					{
						q->left=p;
						break;
					}
					else
					{
						q=q->left;
					}
				}
			}
			
		}
	}
	
	cout<<"level order transversal is :- \n";
	levelorder(root);
	return 0;
}


