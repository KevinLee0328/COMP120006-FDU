#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define N 10
int main()
{
	int a[]={0,0,1,0,4,5,0,7,7,9};int i,j,k;int exist=N;int b[N];
	printf("a[]={%d",a[0]);
	for(i=1;i<N;i++) printf(",%d",a[i]);//打印初始数组
	printf("}\n"); 
	for(i=0;i<exist;i++){
		for(j=i+1;j<exist;j++){
			if(a[i]==a[j]){
				for(k=j;k<N-1;k++) a[k]=a[k+1];
				exist--;
				j--; 
			}
		}
	}
	for(i=0;i<exist;i++) b[i]=a[i];
	printf("b[]={%d",b[0]);
	for(i=1;i<exist;i++) printf(",%d",b[i]);//打印处理后数组 
	printf("}\n"); 
	system("pause");
	return 0;
}

