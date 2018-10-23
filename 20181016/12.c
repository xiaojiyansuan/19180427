#include<stdio.h>
int gcd(int a,int b){
    /*if(a<b){
        int temp=a;
        a=b;
        b=temp;
    }
    if(b==0){
        return 1;
    }
    int r=a%b;
    if(r==0){
        return b;
    } else{
        return gcd(b,r)
    }*/ 
    int r=a%b;
    while(r){
        a=b;
        b=r;
        r=a%b;
    } 
    return b;
}
int main(){
    int a,b;
    scanf("%d/%d",&a,&b);
    int n=gcd(a,b);
    printf("%d/%d",a/n,b/n);
} 
