#include<stdio.h>

int binary_search_recursive(int arr[], int left, int right, int query);
int binary_search_iterative(int arr[], int left, int right, int query);

int main(){
	int arr[10],left,right,query;
	for(int i=0;i<10;i++){
		arr[i]=i+1;
	} 
	scanf("%d %d %d",&left,&right,&query);
	int m=binary_search_iterative(arr,left,right,query);
	//int m=binary_search_recursive(arr,left,right,query);
	printf("%d",m);
	return 0;
}
int binary_search_recursive(int arr[],int left,int right,int query){
	int i;
	i=(left+right)/2;
	if(i==left && arr[left]!=query && arr[right]!=query) return -1;
	if(arr[left]==query) return left;
	else if(arr[right]==query) return right;
	else if(arr[i]==query) return i;
	else if(arr[i]<query)	return binary_search_recursive(arr,i,right,query);
	else	return binary_search_recursive(arr,left,i,query); 
}

int binary_search_iterative(int arr[],int left,int right,int query){
	int i;
	do{
		i=(left+right)/2;
		if(arr[i]==query){
			return i;
		} 
		else if(arr[i]<query){
			left=arr[i];
		}
		else{
			right=arr[i];
		}
	}while(left!=right);
	if(left==right){
		return -1;
	}
}

