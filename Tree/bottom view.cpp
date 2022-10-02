#include<bits/stdc++.h> 
using namespace std; 
struct Node
{ 
	Node * left; 
	Node* right; 
	int data; 
}; 

Node* newNode(int key)
{ 
	Node* node=new Node(); 
	node->left = node->right = NULL; 
	node->data=key; 
	return node; 
} 

void fillMap(Node* root,int d,int l,map<int,pair<int,int> > &m){ 
	if(root==NULL) return; 

	if(m.count(d)==0)
	{ 
		m[d]=make_pair(root->data,l); 
	}
	else if(m[d].second<l)
	{ 
		m[d]=make_pair(root->data,l); 
	}
	fillMap(root->right,d+1,l+1,m);
	fillMap(root->left,d-1,l+1,m);  
} 

void topView(struct Node *root)
{ 
	map<int,pair<int,int> > m; 
	fillMap(root,0,0,m); 
	map<int,pair<int,int> >::iterator it;  
	for( it=m.begin();it!=m.end();it++)
	{ 	
		cout<<it->second.first <<" "; 
	} 
} 

int main()
{ 
	Node* root = newNode(1); 
	root->left = newNode(2); 
	root->right = newNode(3); 
	root->left->right = newNode(4); 
	root->left->right->right = newNode(5); 
	root->left->right->right->right = newNode(6); 
	cout<<"Following are nodes in top view of Binary Tree\n"; 
	topView(root); 
	return 0; 
} 
