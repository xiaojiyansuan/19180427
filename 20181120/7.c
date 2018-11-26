#include<stdio.h>
#include<stdlib.h>
void merge(int arr[], int low,int mid, int high){
    int i, k;
    int *tmp = (int *)malloc((high-low+1)*sizeof(int));
    int left_low = low;
    int left_high = mid;
    int right_low = mid + 1;
    int right_high = high;
    for(k=0; left_low<=left_high && right_low<=right_high; k++){ 
        if(arr[left_low]<=arr[right_low]){
            tmp[k] = arr[left_low++];
        }else{
            tmp[k] = arr[right_low++];
        }
    }

    if(left_low <= left_high){ 
    for(i=left_low;i<=left_high;i++)
        tmp[k++] = arr[i];
    }

    if(right_low <= right_high){
            for(i=right_low; i<=right_high; i++)
            tmp[k++] = arr[i];
    }

    for(i=0; i<high-low+1; i++)
        arr[low+i] = tmp[i];
    free(tmp);
    return;
}

void merge_sort(int arr[], unsigned int first, unsigned int last){
    int mid = 0;
    if(first<last){
        mid = (first+last)/2; 
        merge_sort(arr, first, mid);
        merge_sort(arr, mid+1,last);
        merge(arr,first,mid,last);
    }
    return;
}
int main()
{
	int c;
	printf("请输入元素的个数:");
	scanf("%d",&c);
	int n[c],i=0,a,b;
	printf("请输入数组的元素：\n");
	for(;i<c;i++)
		scanf("%d",&n[i]);
LOOP:
	printf("请输入数组的子区间：\n");
	scanf("%d%d",&a,&b);
	if(a>=b||a<0||b>c)
	{
		printf("输入有误,请重新输入!\n");
		goto LOOP;
	}
	merge_sort(n,a,b);
	for (i=a;i<b;i++)
                printf("%d\t",n[i]);
	printf("%d\t",n[a-1]);
        printf("\n");
	return 0;
}
