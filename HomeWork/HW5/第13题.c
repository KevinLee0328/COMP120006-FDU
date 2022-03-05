#include<stdio.h>
void main()
{
	int k,m,j;
	k=15;
	for(m=2;m<=k;m++){
		for(j=2;j*j<=m;j++) if(m%j==0) break;
		if(m%j!=0) printf("%4d",m);
	} 
	printf("\n");
}

