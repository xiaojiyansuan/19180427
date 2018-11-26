#include<stdio.h>
void Merge(int arr[], int left, int mid, int right) 
{
	int size = right - left + 1;
	int* temparr = (int*)malloc(size * sizeof(int));
	int i = left, j = mid + 1, k = 0;
	while (i <= mid && j <= right) {
		if (arr[i] <= arr[j])
			temparr[k++] = arr[i++];
		else
			temparr[k++] = arr[j++];
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
