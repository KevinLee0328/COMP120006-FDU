#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 10
void input(int *p[N],int n){
	int i;
	for(i=0;i<n;i++){
		printf("a%d=",i);
		scanf("%d",*(p+i));
	}
}
void output(int *p[N],int n){
	int i;
	for(i=0;i<n;i++) printf("a%d=%d\n",i,**(p+i));
}
void sort(int *p[N],int n){
	int i,j,temp;
	for(i=0;i<n;i++){
		for(j=n-1;j>i;j--){
			if(**(p+j)<**(p+j-1)){
				temp=**(p+j);**(p+j)=**(p+j-1);**(p+j-1)=temp;
			}
		}
	}
}
int main()
{

	int a0,a1,a2,a3,a4,a5,a6,a7,a8,a9;int *p[]={&a0,&a1,&a2,&a3,&a4,&a5,&a6,&a7,&a8,&a9};int fun;void (*fp)(int**,int);
	while(1){
		printf("function(1=input,2=output,3=sort):");scanf("%d",&fun);
		if(fun==1) fp=input;if(fun==2) fp=output;if(fun==3) fp=sort;
		(*fp)(p,N);
	}
	system("pause");
	return 0;
}
