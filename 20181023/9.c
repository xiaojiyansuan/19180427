#include<iostream>
using namespace std;
void main()
{
int arr[10];
int min_num = 0,max_num = 0; 
    for(int i = 0; i < 10; i++)
    {
        cin >> arr[i]; 
        if(arr[i] > arr[max_num]) 
            max_num = i;
        else if(arr[i] < arr[min_num])  
            min_num = i;
    }
    cout << "最大值是:" << arr[max_num] <<" 对应下标:" << max_num 
         << ",最小值是" << arr[min_num] <<" 对应下标:" << min_num << endl;
}

