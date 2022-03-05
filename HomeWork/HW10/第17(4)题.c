#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,n;char s1[100]="Hello ",*s2="World!";char *from=s2,*to;
	puts(s2);
	for(n=0;*(s1+n);n++);
	to=s1+n;
	for(i=0;*from;i++) *to++=*from++;
	*to='\0';
	puts(s1);
	system("pause");
	return 0;
}

