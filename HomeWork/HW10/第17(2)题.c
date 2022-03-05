#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i;char *a="Hello World!";
	puts(a);
	for(i=0;*(a+i);i++);
	printf("There are %d charaters.",i);
	system("pause");
	return 0;
}

