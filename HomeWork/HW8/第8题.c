#include<stdio.h>
#include<stdlib.h>
int gcd(int a,int b){
	if(a==b){
		printf("a=%d,b=%d,a=b,return a\n",a,b);
		return a;
	}
	else if(a>b){
		printf("a=%d,b=%d,a>b,return gcd(a-b,b)\n",a,b);
		return gcd(a-b,b);
	}
	else{
		printf("a=%d,b=%d,a<b,return gcd(a,b-a)\n",a,b);
		return gcd(a,b-a);	
	}
}
int main()
{
	int x,y,z;
	printf("Enter two integers!\n");scanf("%d%d",&x,&y);
	z=gcd(x,y);
	printf("(%d,%d)=%d\n",x,y,z);
	system("pause");
	return 0;
}

