#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int main()
{
	int x,y;char z;int ans;
	printf("Please input 2 integers:\n") ;
	scanf("%d%d",&x,&y);
	printf("Please input the calculation(+or-or*or/or%%):\n") ;
	scanf(" %c",&z);
	if(z=='+') ans=x+y;
	else if(z=='-') ans=x-y;
	else if(z=='*') ans=x*y;
	else if(z=='/') ans=x/y;
	else if(z=='%') ans=x%y;
	printf("The answer is:%d\n",ans);
	system("pause");
	return 0;
}


