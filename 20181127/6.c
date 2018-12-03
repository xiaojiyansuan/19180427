#include <stdio.h>
#include <stdlib.h>

struct Node{
	int val;
	struct Node* next;
};

struct Node* delete(struct Node* head, int val);

int main(){
	int arr[]={0,5,2,3,9,4,7,8,9};
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
	hhead=delete(head,9);
	p=hhead;
	while(p){
		printf("%d ",p->val );
		p=p->next; 
	}
	return 0;	
} 


struct Node* delete(struct Node* head,int val){
	struct Node *p1,*p2;
	p1=head;
    if(head->val ==val){
    	head=head->next;
	}
	else{
		while(p1!=0){
			p2=p1->next;
			if(p2->val ==val){
				p1->next=p2->next;
			}
			p1=p1->next;
		}
	}
	return head;
}
