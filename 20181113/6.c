#include<stdio.h>
#include<string.h>
void k_reverse(char* str, int k);
void change(char *str,int i,int k);

int main(){
	char *str,stra[100];
	int k;
	str=stra;
	scanf("%s",str);
	scanf("%d",&k);
	k_reverse(str,k);
	puts(str);	
	return 0;
}

void k_reverse(char*str,int k){
	int len=strlen(str);
	for(int i=0;i<len;i=i+k){
		if((len-i)<k) break;
		else change(str,i,k);
	}
	

} 
void change(char*str,int i,int k){
	int right=(2*i+k)/2,temp;
	if(k%2){
	    for(i;i<right;i++){
	    	temp=str[i];
	    	str[i]=str[i+k-1];
    		str[i+k-1]=temp;
    	}
	}
	else{
		for(i;i<=right;i++){
	    	temp=str[i];
	    	str[i]=str[i+k-1];
    		str[i+k-1]=temp;
		}
    }
}
