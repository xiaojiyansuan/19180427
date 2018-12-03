#include <stdio.h>
#include <stdlib.h>

struct Node{
	int val;
	struct Node *next;
};

struct Node* delete(struct Node* head, struct Node* target);
struct Node* construct(int arr[], int size);

int main(){
	int arr[]={0,5,2,3,6,4,7,8,9};
	int size=9,i=0;
    struct Node* head;
	head=construct(arr,size);
    
	struct Node* target;
	int n;
    scanf("%d",&n);
    
    if(n==1){
    	target=head;
	}
	else{
		struct Node*p;
		p=head;
		for(i=0;i<n-1;i++){
			p=p->next;
		}
		target=p;
		target->next=p->next;
	}
    
    
    
    struct Node* hhead;
    hhead=delete(head,target);
    struct Node* pp;
    pp=hhead;
    while(pp!=0){
    	printf("%d ",pp->val);
    	pp=pp->next;
	}
	return 0;
} 

struct Node* construct(int arr[],int size){
	int i=0;
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
	return head;
}

struct Node* delete(struct Node* head, struct Node* target){
	struct Node* prev = NULL;
	struct Node* p = head;
	struct Node* post;
	while (p) {
		post = p->next;
		if (p == target) {
			if (prev == NULL) {
				free(p);
				return post;
			}
			prev->next = post;
			free(p);
			return head;
		}
		prev = p;
		p = post;
	}
	return head;

}
