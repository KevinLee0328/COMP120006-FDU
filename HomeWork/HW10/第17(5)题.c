#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,n;char s[100]="Hello World!";
	puts(s);
	for(i=0;*(s+i);i++) if(*(s+i)>=97&&*(s+i)<=122) *(s+i)-=32;
	puts(s);
	system("pause");
	return 0;
}

