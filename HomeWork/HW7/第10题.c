#include<stdio.h>
#include<stdlib.h>
#define N 6
int main()
{
	int a[]={3,2,6,5,4,1};int i,j,t,k;
	printf("a[]={%d",a[0]);
	for(i=1;i<N;i++) printf(",%d",a[i]);//打印初始数组
	printf("}\n"); 
	for(i=N-1;i>0;i--){
		if(a[i]>=a[i-1]) break;
	}
	if(i==0){printf("error!\n");exit(1);}
	for(j=i;j<N;j++) if(a[j]<=a[i-1]&&a[j-1]>a[i-1]) break;
	t=a[i-1];a[i-1]=a[j-1];a[j-1]=t;
	for(k=i;k<N-1;k++){
		for(j=N-1;j>k;j--){
			if(a[j]<a[j-1]){t=a[j];a[j]=a[j-1];a[j-1]=t;}
		}
	}
	printf("a[]={%d",a[0]);
	for(i=1;i<N;i++) printf(",%d",a[i]);//打印处理后数组 
	printf("}\n"); 
	system("pause");
	return 0;
}

