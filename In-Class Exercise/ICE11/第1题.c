#include<stdio.h>
#include<stdlib.h>
#define N 10
void sort(int *p){
	int i,temp,*max=p,*min=p;
	for(i=0;i<N;i++){
		if(*(p+i)>*max) max=p+i;
		if(*(p+i)<*min) min=p+i;
	}
	temp=*min;*min=*p;*p=temp;
	temp=*max;*max=*(p+N-1);*(p+N-1)=temp;
}
void input(int *p){
	int i;
	printf("a[%d]=\n",N);
	for(i=0;i<N;i++) scanf("%d",p+i);
}
void output(int *p) {
	int i;
	printf("a[]={%d",*p);
	for(i=1;i<N;i++) printf(",%d",*(p+i));
	printf("}\n"); 
}
int main()
{
	int a[N];int n;
	while(1){
		printf("function(input=1,sort=2,output=3)=");
		scanf("%d",&n);
		if(n<1||n>3) {printf("error!\n");continue;}
		if(n==1) input(a);
		if(n==2) sort(a);
		if(n==3) output(a);
	}
	system("pause");
	return 0;
}

