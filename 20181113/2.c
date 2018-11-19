#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void BubbleSort(int arr[], int left, int right);

int main(){
	srand(time(NULL));
	int arr[100],left,right;
	for(int i=0;i<100;i++){
		arr[i]=rand()%10000;
	    
	}
	scanf("%d %d",&left,&right);
	for(int i=0;i<100;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	BubbleSort(arr,left,right);
	for(int i=0;i<100;i++){
		printf("%d ",arr[i]);
	}
	return 0;
} 

void BubbleSort(int arr[],int left,int right){
	for(int i=left;i<right;i++){
		int j,t;
		for(j=i+1;j<=right;j++){
			if(arr[i]>arr[j]){
				t=arr[i];
				arr[i]=arr[j];
				arr[j]=t;
			}
		}
	}
}

