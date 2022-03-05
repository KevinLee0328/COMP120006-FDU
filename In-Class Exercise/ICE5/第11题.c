#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main()
{
	int n,i,j;
	printf("n=");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("%*c",2*(n-i),'*') ;
		for(j=0;j<i;j++){
			printf(" *");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}


