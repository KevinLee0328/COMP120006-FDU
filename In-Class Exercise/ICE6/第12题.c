#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define N 10
int main()
{
	int a[]={1,2,3,4,5,6,7,8,9,0};int m,i;int temp;
	printf("a[]={%d",a[0]);
	for(i=1;i<N;i++) printf(",%d",a[i]);//��ӡ��ʼ���� 
	printf("}\n");
	printf("m=");
	scanf("%d",&m);
	for(;m>0;m--){//���ƶ�m�Σ�ÿ���ƶ�1�� 
		temp=a[0];//temp�ݴ����� 
		for(i=0;i<N-1;i++) a[i]=a[i+1];
		a[N-1]=temp;
	}
	printf("a[]={%d",a[0]);
	for(i=1;i<N;i++) printf(",%d",a[i]);//��ӡ���������� 
	printf("}\n");
	system("pause");
	return 0;
}

