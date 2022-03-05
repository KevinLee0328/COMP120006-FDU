#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main()
{
	long n;int a[20];int i,j;int flag=1;
	printf("please input an integer:") ;
	scanf("%ld",&n);
	printf("%ld ",n);
	for(i=0;n>0;i++){
		a[i]=n%10;
		n/=10;
	}
	for(j=0;j<i/2;j++){
		if(a[j]!=a[i-j-1]){flag=0;break;}
	}
	if(flag) printf("is a palindrome number.\n");
	else printf("is not a palindrome number.\n");
	system("pause");
	return 0;
}


