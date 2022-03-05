#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define N 10
int main()
{
	int a[]={0,1,2,3,4,5,6,7,8,9};int i;int temp; 
	printf("a[]={%d",a[0]);
	for(i=1;i<N;i++) printf(",%d",a[i]);//打印初始数组
	printf("}\n"); 
	for(i=0;i<N/2;i++){
		temp=a[i];
		a[i]=a[N-i-1];
		a[N-i-1]=temp;
	}
	printf("a[]={%d",a[0]);
	for(i=1;i<N;i++) printf(",%d",a[i]);//打印重排后数组
	printf("}\n"); 
	system("pause");
	return 0;
}

