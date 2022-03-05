#define check(n) (n)%100==0?((n)%400==0):((n)%4==0)
#include<stdio.h>
int main(){
	while(1){
		int n;
		printf("year=");
		scanf("%d",&n);
		printf("check=%d\n",check(n));	
	}
}
