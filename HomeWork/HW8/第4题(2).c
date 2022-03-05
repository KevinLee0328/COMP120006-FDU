#include<stdio.h>
#include<stdlib.h>
int mul(int,int);
int main()
{
	int u,v,w;
	printf("Enter two integers!\n");scanf("%d%d",&u,&v);
	if(v>=0) w=mul(u,v);
	else w=-mul(u,-v);
	printf("The result is %d\n",w);
	system("pause");
	return 0;
}
int mul(int a,int b){
	if(a==0||b==0) return 0;
	if(b==1) return a;
	return a+mul(a,b-1);
}

