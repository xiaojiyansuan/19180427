#include<iostream>
using namespace std;
 
int a[10][10];
 
void Fun(int n)
{
	int m=1;
	int i,j;
	for(i =0;i<n/2;i++){
		for(j=0;j<n-i;j++){
			if(a[i][j] ==0)
				a[i][j] = m++;
			}
		for(j=i+1;j<n-i;j++){
			if(a[j][n-1-i] ==0)
				a[j][n-1-i] = m++;
		}
		for(j=n-i-1;j>i;j--){
			if(a[n-i-1][j] ==0)
				a[n-i-1][j] = m++;
		}
		for(j=n-i-1;j>i;j--){
			if(a[j][i] ==0)
				a[j][i] = m++;
		}
	}
	if(n%2==1)
		a[n/2][n/2]=m;
}
 
int main(void)
{
	int n,i;
	cout<<"请输入螺旋矩阵维数： "<< endl;
	cin>>n;
	cout<<"显示螺旋矩阵数值： "<< endl;
	for(i=0;i<n;i++){
		for(int j=0;j<n;j++){
			a[i][j]=0;
		}
	}
	Fun(n);
	for(i=0;i<n;i++){
		for( int j=0;j<n;j++){
			cout<<a[i][j]<< "\t";
		}
	cout<<endl;
	}
	return 0;
}
