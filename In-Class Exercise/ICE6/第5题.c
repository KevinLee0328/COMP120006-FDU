#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define N 20 
int main()
{
	int a[]={1,1,3,4,5,6,8,8,8,8,8,12,14,14,14,14,17,18,19,20};int max=1,plat=1;int i;
	for(i=1;i<N;i++){
		if(a[i]==a[i-1]) plat++;//platͳ��ƽ̨�� 
		else plat=1;// plat��λ 
		if(plat>max) max=plat;//����max
	}
	printf("max=%d\n",max);
	system("pause");
	return 0;
}

