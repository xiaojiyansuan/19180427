#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
}; 
struct Node *output(struct Node *head);
struct Node *Create1();
struct Node *Create2();
struct Node* merge(struct Node* head1, struct Node* head2);

int main()
{
	struct Node *x,*y,*z;
	x=(struct Node *)malloc(sizeof(struct Node));
	y=(struct Node *)malloc(sizeof(struct Node));
	z=(struct Node *)malloc(sizeof(struct Node));
	x=Create1();
	y=Create2();
	output(x);
	printf("\n");
	output(y);
	printf("\n");
	z=merge(x,y);
	output(z);
	return 0;
}
struct Node *Create1()
{
	struct Node *p1,*p2,*p3,*p4;
	p1=(struct Node *)malloc(sizeof(struct Node));	p1->data=111;
	p2=(struct Node *)malloc(sizeof(struct Node));	p2->data=333;
	p3=(struct Node *)malloc(sizeof(struct Node));	p3->data=555;
	p4=(struct Node *)malloc(sizeof(struct Node));	p4->data=777;
	p1->next=p2;
	p2->next=p3;
	p3->next=p4;
	p4->next=NULL;
	return p1;
}
struct Node *Create2()
{
	struct Node *p1,*p2,*p3,*p4;
	p1=(struct Node *)malloc(sizeof(struct Node));	p1->data=222;
	p2=(struct Node *)malloc(sizeof(struct Node));	p2->data=444;
	p3=(struct Node *)malloc(sizeof(struct Node));	p3->data=666;
	p4=(struct Node *)malloc(sizeof(struct Node));	p4->data=888;
	p1->next=p2;
	p2->next=p3;
	p3->next=p4;
	p4->next=NULL;
	return p1;
}

struct Node *output(struct Node *head){
	struct Node *p;
	p=head;
	while(p!=NULL){
		printf("%d  ",p->data);
		p=p->next;
	}
}

struct Node* merge(struct Node* head1, struct Node* head2)
{
	if(!head1)
	return head2;
	if(!head2)
	return head1;
	struct Node *head=NULL;
	struct Node *p1=head1;
	struct Node *p2=head2;
	if(head1->data<head2->data)
	{
		head=head1;
		p1=head1->next;
	}
	else
	{
		head=head2;
		p2=head2->next;
	}
	struct Node *p=head;
	while(p1&&p2)
	{
		if(p1->data<p2->data)
		{
			p->next=p1;
			p1=p1->next;
			
		}
		else
		{
			p->next=p2;
			p2=p2->next;
		}
		p=p->next;
	}
	if(p1)
	{
	    p->next=p1;
	}
	else if(p2)
	{
		p->next=p2;
	}
	return head;
}
