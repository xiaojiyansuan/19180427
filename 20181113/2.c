#include<stdio.h>
void main()
void swap(int arr[], int i, int j) {
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}
void BubbleSort(int arr[], int left, int right) {
	int i, j;
	for (i = 1; i <= right - left; ++i) {
		for (j = left; j <= right - i; ++j) {
			if (arr[j] > arr[j + 1])
				swap(arr, j, j + 1);
		}
	}
}
