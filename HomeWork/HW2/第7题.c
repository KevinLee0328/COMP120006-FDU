#include<stdio.h> 
#include<stdlib.h> 
int main()
{
	int i;char c;long k;float f;double x;
	scanf("i=%d c=%c",&i,&c);
	scanf("k=%ld",&k);
	scanf("f=%f x=%lf",&f,&x);
	printf("output:%d %c %ld %.1f %.1lf\n",i,c,k,f,x);
	system("pause");
	return 0;
}
