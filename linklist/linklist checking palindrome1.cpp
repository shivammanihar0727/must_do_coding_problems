#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
	int data;
	node *next;
};


node *reverse(node *head)
{ 
    node* prev = NULL; 
     node* current = head; 
     node* next; 
    while (current != NULL) { 
        next = current->next; 
        current->next = prev; 
        prev = current; 
        current = next; 
    } 
    head = prev;
	return head; 
} 
//node *reverse(node *head)
//{
//	
//	node *p,*q;
//	if(head==NULL)
//	{
//		return head;
//	}
//	p=head;
//	q=p->next;
//	
//	if(q==NULL)
//	{
//		return p;
//	}
//	q=reverse(q);
//	p->next->next=p;
//	p->next=NULL;
//	return q;	
//
//}
void check_palindrome(node *start)
{
	node *p,*q,*first_start,*second_start;
	p=start;
	q=start;
	if(p->next==NULL)//if only one elemnt is present
	{
		cout<<"Palindrome";
	}
	while(1)
	{
		p=p->next->next;
		if(p==NULL)
		{
			second_start=q->next;
			break;
		}
		if(p->next==NULL)
		{
			second_start=q->next->next;
			break;
		}
		q=q->next;
	}
	q->next=NULL;
	second_start=reverse(second_start);
	first_start=start;
	while(first_start!=NULL&&second_start!=NULL)
	{
		if(first_start->data==second_start->data)
		{
			first_start=first_start->next;
			
			second_start=second_start->next;
		}
		else
		{
			cout<<"Not palindrome";
			return;
		}
	}
	cout<<"palindrome";
}
int main()
{
	node *p,*q,*head,*head1;
	int n,i,a;
	cin>>n;
	if(n>0)
	{
		cin>>a;
		p=new node();
		p->data=a;
		p->next=NULL;
		head=p;
	}
			
		for(i=1;i<n;i++)
		{
			cin>>a;
			q=new node;
			q->data=a;	
			q->next=NULL;
			p->next=q;
			p=p->next;
		}
	
		check_palindrome(head);	
}
