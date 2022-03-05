#include <stdio.h>
#include <stdlib.h>
int count(int n){
	int i;
	if(n==1) return 1;
	else if(n==2) return 2;
	else if(n>2) return count(n-1)+count(n-2);
}
int main(){
	int n;
	while(1){
		printf("n=");
		scanf("%d",&n);
		printf("count=%d\n",count(n));
	}
}
