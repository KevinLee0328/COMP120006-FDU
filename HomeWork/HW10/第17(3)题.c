#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,n;char s1[100],*s2="Hello World!";char *from=s2,*to=s1;
	puts(s2);
	printf("n=");
	scanf("%d",&n);
	for(i=0;i<n;i++) *to++=*from++;
	*to='\0';
	puts(s1);
	system("pause");
	return 0;
}

