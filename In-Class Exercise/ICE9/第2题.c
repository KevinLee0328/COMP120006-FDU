#include <stdio.h> 
#include <stdlib.h>
#define check(n) (((n&((~n)+1)))==n)
int main(){
	int n;
	while(1){
		printf("n=");
		scanf("%d",&n);
		printf("check=%d\n",check(n));
	}
}
