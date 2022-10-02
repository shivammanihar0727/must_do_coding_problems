
#include<bits/stdc++.h>
using namespace std;
class node{
	public:
	int data;
	node *next;
};

 int length(node* head)
 {
     int len=0;
     while(head!=NULL)
     {
         head=head->next;
         len++;
     }
     return len;
 }
int findMergeNode(node* head1, node* head2) 
{
    int m=length(head1);
    int n=length(head2);
    int diff,i;
    if(m>n)
    {
        diff=m-n;
        for(i=0;i<diff;i++)
        {
        	
        //	cout<<"hey3";
            head1=head1->next;
        }
    }
    else if(m<n)
    {
        diff=n-m;
        for(i=0;i<diff;i++)
        {
        //	cout<<"hey2";
            head2=head2->next;
        }
    }
    while(head1!=NULL&&head2!=NULL)
    {
        //	cout<<"hey4";
        if(head1->data==head2->data)
        {
            return head1->data;
        }
        head1=head1->next;
        head2=head2->next;
    }
    return 0;
}


int main()
{
	node *p,*q,*head1=NULL,*head2=NULL,*sorting;
	int n,n1,n2,a,i;
	
	cout<<"Enter length of 1 linklist = ";
	
	cin>>n1;
	if(n1>0)
	{
		cin>>a;
		p=new node();
		p->data=a;
		p->next=NULL;
		head1=p;
	}
	for(i=1;i<n1;i++)
	{
		
		cin>>a;
		q=new node();
		q->data=a;
		q->next=NULL;
		p->next=q;
		p=p->next;
	}
	
	cout<<"Enter length of 2 linklist = ";
	
		cin>>n2;
	if(n2>0)
	{
		cin>>a;
		p=new node();
		p->data=a;
		p->next=NULL;
		head2=p;
	}
	for(i=1;i<n2;i++)
	{
		
		cin>>a;
		q=new node();
		q->data=a;
		q->next=NULL;
		p->next=q;
		p=p->next;
	}
	p=head1;
	q=head2;
	cout<<"\n1 linklist \n";
	while(p!=NULL)
	{
		cout<<p->data<<"->";
		p=p->next;
	}
	
	cout<<"\n2 linklist \n";
	while(q!=NULL)
	{
		cout<<q->data<<"->";
		q=q->next;
	}
	
	int data=findMergeNode(head1,head2);
	printf("\n Merging point of Linked List => %d",data);
	
		return 0;
	
}
