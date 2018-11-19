#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void InsertionSort(int arr[], int left, int right);


int main(){
	srand(time(NULL));
	int arr[100],left,right;
	scanf("%d %d",&left,&right);
	for(int i=0;i<100;i++){
		arr[i]=rand()%1000;
	}
	for(int i=0;i<100;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	InsertionSort(arr,left,right);
	for(int i=0;i<100;i++){
		printf("%d ",arr[i]);
	}
}
void InsertionSort(int arr[],int left, int right){
	int j,key;
	for(int i=left+1;i<=right+1;i++){
		j=i-1;
		key=arr[i];
		do{
			arr[j+1]=arr[j];
			j--;
		}while(j>=0 && arr[j]>key);
		arr[j+1]=key;
	}
}
