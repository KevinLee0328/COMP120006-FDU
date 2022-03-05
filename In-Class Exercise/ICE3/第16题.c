#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int main()
{
	int x,y;
	printf("Please input 2 integers:\n") ;
	printf("x=");
	scanf("%d",&x);
	printf("y=");
	scanf("%d",&y);
	if(x<y) printf("x<y\nx!=y\n");
	else if(x>y) printf("x>y\nx!=y\n");
	else printf("x==y\n");
	if(x%y==0) printf("y|x\n");
	if(y%x==0) printf("x|y\n");
	system("pause");
	return 0;
}


