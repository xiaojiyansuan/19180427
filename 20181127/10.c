#include <stdio.h>
#include <string.h> 
#include <time.h>
//#include <stdlib.h>
void Merge(int arr[], int left, int mid, int right);
void MergeSort(int arr[], int left, int right); 
int count=0;
int main(){

	int n,i,k,len;
	int left,right;
	printf("请输入N :\n");
	scanf("%d",&n);
	int arr[n];
	srand((unsigned int)rand(NULL));

	for(i=0;i<n;i++){

		arr[i]=rand()%100;
	}

	printf("origin:");
	for(i=0;i<n;i++)
	   printf("%d  ",arr[i]);
	left=0;
	right=n-1;
	MergeSort(arr,left,right);
	printf("\n排序后数列的结果是:");
	for(i=0;i<n;i++)
	  printf("%d  ",arr[i]);
	  printf("\n");
	  printf("逆序数对个数为：%d",count);
	return 0;

}

void Merge(int arr[], int left, int mid, int right) {
	int size = right - left + 1;
	int* temparr = (int*)malloc(size * sizeof(int));
	int i = left, j = mid + 1, k = 0;
	while (i <= mid && j <= right) {
		if (arr[i]<=arr[j])
			temparr[k++] = arr[i++];
		
		else
			{temparr[k++] = arr[j++];
			count+=mid-i+1;}
	}
	while (i <= mid)
		temparr[k++] = arr[i++];
	while (j <= right)
		temparr[k++] = arr[j++];
	memcpy(arr + left, temparr, size * sizeof(int));
	free(temparr);

}
void MergeSort(int arr[], int left, int right) {
	int mid = left + (right - left) / 2;
	if (left >= right)
		return;
	MergeSort(arr, left, mid);
	MergeSort(arr, mid + 1, right);
	Merge(arr, left, mid, right);
}
