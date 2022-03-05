#define max(a,b,c) (a)>(b)?((a)>(c)?(a):(c)):((b)>(c)?(b):(c))
#include<stdio.h>
int main(){
	while(1){
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		printf("max=%d\n",max(a,b,c));	
	}
}
