#include<stdio.h>
#include<stdlib.h>
int flag(int x){
	int i,t=0;
	for(i=1;i<=x/2;i++){
		if(x%i==0) t+=i;
	}
	if(t==x) return 1;
	else return 0;
}
int main()
{
	int i;
	printf("1000之内的所有完全数："); 
	for(i=2;i<1000;i++)
		if(flag(i)) printf("%4d,",i);
	printf("\n"); 
	system("pause");
	return 0;
}

