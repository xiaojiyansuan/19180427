#include<stdio.h>
struct Node* construct(int arr[], int size)
{
	int i;
	struct Node head;
	struct Node *prev, *p;
	head.next = NULL;
	prev = &head;
	for (i = 0; i < size; ++i) {
		p = (struct Node* )malloc(sizeof(struct Node));
		p->val = arr[i];
		p->next = NULL;
		prev->next = p;
		prev = p;
	}
	return head.next;
}
int main()
{
int arr[10],size,i;
for(i=0;i<10;i++)
scanf("%d",arr[i]);
scanf("%d",size);
struct Node* construct(arr[10], size);
return 0;
}
