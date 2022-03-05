#include<stdio.h>
#include<stdlib.h>
void swap(char **a,char **b){
	char *temp;
	temp=*a;*a=*b;*b=temp;
}
int main()
{
	char *s1="Shanghai";char *s2="Beijing";
	swap(&s1,&s2);
	printf("s1=%s\ns2=%s\n",s1,s2);
	system("pause");
	return 0;
}

