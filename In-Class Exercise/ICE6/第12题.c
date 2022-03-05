#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define N 10
int main()
{
	int a[]={1,2,3,4,5,6,7,8,9,0};int m,i;int temp;
	printf("a[]={%d",a[0]);
	for(i=1;i<N;i++) printf(",%d",a[i]);//打印初始数组 
	printf("}\n");
	printf("m=");
	scanf("%d",&m);
	for(;m>0;m--){//共移动m次，每次移动1个 
		temp=a[0];//temp暂存数据 
		for(i=0;i<N-1;i++) a[i]=a[i+1];
		a[N-1]=temp;
	}
	printf("a[]={%d",a[0]);
	for(i=1;i<N;i++) printf(",%d",a[i]);//打印互换后数组 
	printf("}\n");
	system("pause");
	return 0;
}

