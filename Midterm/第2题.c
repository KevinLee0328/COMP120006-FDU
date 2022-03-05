#include<stdio.h>
#include<string.h>
void comp(int n){
	int count=0;int i;int k[1000],j=0;
	for(i=1;i<n;i++){
		if(n%i==0){
			count+=i;k[j]=i;j++;
		}
	}
	if(count==n){
		printf("%d=",n);
		printf("%d",k[0]);
		for(i=1;i<j;i++){
			printf("+%d",k[i]);
		}
		printf("\n");
	}
} 
int main(){
	int i;
	for(i=2;i<=1000;i++) comp(i);
	return 0;
}
