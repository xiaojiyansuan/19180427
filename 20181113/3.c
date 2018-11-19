#include<stdio.h>
int main()
int binary_search_recursive(int arr[], int left, int right, int query) {
	int mid;
	if (left > right)
		return -1;
	mid = left + (right - left) / 2;
	if (arr[mid] == query)
		return mid;
	if (arr[mid] > query)
		return binary_search_recursive(arr, left, mid - 1, query);
	return binary_search_recursive(arr, mid + 1, right, query);
}
