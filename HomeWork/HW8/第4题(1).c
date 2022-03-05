#include<stdio.h>
#include<stdlib.h>

void main()
{
	int c;
	if((c=getchar())!='\n'){
		main();printf("%c",c);
	}
	else printf("\n");
}

