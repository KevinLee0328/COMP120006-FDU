#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define N 10
int main()
{
	int a[]={0,1,2,3,4,5,6,7,8,9};int i;
	printf("a[]={%d",a[0]);
	for(i=1;i<N;i++) printf(",%d",a[i]);//��ӡ��ʼ����
	printf("}\n"); 
	for(i=0;i<N;i+=4) printf("%d,",a[i]);
	printf("\n"); 
	system("pause");
	return 0;
}

