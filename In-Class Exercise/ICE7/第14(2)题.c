#include<stdio.h>
#include<stdlib.h>
#define N 12
int main()
{
int a[N][N];int i=0,j,n=0,t=0,f=N-1;
	for(j=0;j<N-1;j++) a[n][t++]=++i;
	a[n][t]=++i;
	while(1){
		for(j=0;j<f;j++) a[++n][t]=++i;
		for(j=0;j<f;j++) a[n][--t]=++i;
		f--;
		if(f==0) break;
		for(j=0;j<f;j++) a[--n][t]=++i;
		for(j=0;j<f;j++) a[n][++t]=++i;
		f--;
		if(f==0) break;
	}
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}

