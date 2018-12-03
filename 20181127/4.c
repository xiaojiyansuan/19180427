#include <stdio.h>
#include <stdlib.h>
struct Node{
	int val;
	struct Node* next;
}; 
struct Node* insert(struct Node* head, int val);

int main(){
	int arr[]={0,5,2,3,6,4,7,8,9};
	int size=9,i=0;
	struct Node *p1,*p2,*head;
	head=NULL;
	for (i=0;i<size;i++){
		p1=(struct Node*)malloc(sizeof(struct Node));
		p1->val=arr[i];
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
	struct Node *hhead,*p;
	hhead=insert(head,10);
	p=hhead;
	while(p){
		printf("%d ",p->val );
		p=p->next; 
	}
	return 0;
}

struct Node*insert(struct Node *head,int val){
	int i=0;
	struct Node *p;
	p=head;
	//插入在第六个数后面 
	for(i=0;i<6-1;i++){
		p=p->next;
	}
	struct Node *in;
	in=(struct Node*)malloc(sizeof(struct Node));
	in->val =val;
	in->next =p->next;
	p->next=in;
	return head; 
	
}
