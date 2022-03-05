#include<stdio.h>
#include<stdlib.h>
void prt(int x)
{
	int i;
	printf("%2c\n",'*');
	printf("%2c",'*');printf("%2c\n",'*');
	for(i=3;i<x;i++){
		printf("%2c",'*');
		printf("%*c",2*(i-2),' ');
		printf("%2c\n",'*');
	}
	for(i=0;i<x;i++){
		printf("%2c",'*');
	}
	printf("\n");
}
int main(){
	int n;
	printf("n=");
	scanf("%d",&n);
	prt(n);
	system("pause");
	return 0;
}

