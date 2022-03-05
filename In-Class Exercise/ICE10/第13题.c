#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int sum(int x,int y){
	return x+y;
}
int difference(int x,int y){
	return x-y;
}
int product(int x,int y){
	return x*y;
}
int quotient(int x,int y){
	return x/y;
}
int execute(int x,int y,int (*p)(int,int)){
	return (*p)(x,y);
}
int main()
{
	while(1){
		int x,y,(*fp)(int,int);char cal;
		printf("x=");scanf("%d",&x);
		printf("y=");scanf("%d",&y);
		printf("calculate(+or-or*or/)=");scanf(" %c",&cal);
		if(cal=='+') fp=sum;
		if(cal=='-') fp=difference;
		if(cal=='*') fp=product;
		if(cal=='/') fp=quotient;
		printf("%d%c%d=%d\n\n",x,cal,y,execute(x,y,fp));	
	}
	system("pause");
	return 0;
}
