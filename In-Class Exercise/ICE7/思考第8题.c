#include<stdio.h>
#define N 8
void main()
{
	int i,j,k,n,a[N][N];
	while(1){
		printf("请输入行数：");
		scanf("%d",&n);
		if(n>=1&&n<=N) break;
		printf("输入的行数必须在1~%d之间，请重新输入行数\n",N);
	}
	for(i=0;i<n;i++) a[i][i]=a[i][0]=1;
	for(i=2;i<n;i++){
		for(j=1;j<=i-1;j++){
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n-i;j++) printf("%4d",a[j+i][j]);
		printf("\n");
		printf("%*c",4*i+4,' ');
	}
}

