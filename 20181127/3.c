#include <stdio.h>
#include <stdlib.h>
struct Node{
	int val;
	struct Node *next;
};
struct Node* insert(struct Node* head, int val);
int main(){
	int arr[]={0,5,2,3,6,4,7,8,9};
	int size=9,i=0;
	struct Node *head,*p1,*p2;
	head=NULL;
	for(i=0;i<size;i++){
		p1=(struct Node*)malloc(sizeof(struct Node));
		(*p1).val=arr[i];
		if(head==0){
			head=p1;
			p2=p1;
		}
		else{
			p2->next=p1;
			p2=p1;
		} 
		
	}
	p2->next=NULL;
	struct Node *hhead;
	hhead=insert(head,10);
	struct Node* p;
	p=hhead;
	while(p){
		printf("%d ",p->val);
		p=p->next;
	}
	return 0;
}

struct Node* insert(struct Node *head,int val){
	struct Node *p=(struct Node*)malloc(sizeof(struct Node*));
	p=head;
	for (p = head; p->next; p = p->next);
	struct Node* last=(struct Node*)malloc(sizeof(struct Node));
	(*last).val=val;
	last->next=NULL;
	p->next=last;
	return head;
}
