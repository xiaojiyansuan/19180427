#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void SelectionSort(int arr[], int left, int right);

int main(){
	srand(time(NULL));
	int arr[10],left,right;
	scanf("%d %d",&left,&right);
	for(int i=0;i<10;i++){
		arr[i]=rand()%100;
	} 
	for(int i=0;i<10;i++){
		printf("%d ",arr[i]);
	}	
	printf("\n");
	SelectionSort(arr,left,right);
	for(int i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
	return 0;
} 

void SelectionSort(int arr[],int left,int right){
	int min=arr[0],m;
	for(int i=left;i<=right;i++){
		for(int j=i+1;j<=right;j++){
		    if(arr[i]>arr[j]){
			    min=arr[j];
			    arr[j]=arr[i];
			    arr[i]=min;
			}
		}
	}
}
