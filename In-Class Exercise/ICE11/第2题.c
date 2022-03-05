#include<stdio.h>
#include<stdlib.h>
#define N 6
void sort(int *p,int m){
	int i,j,temp;
	for(i=0;i<m;i++){
		temp=*(p+N-1);
		for(j=N-1;j>0;j--){
			*(p+j)=*(p+j-1);
		}
		*p=temp; 
	}
}
int main()
{
	int a[N];int i,m;
	printf("a[%d]=\n",N);
	for(i=0;i<N;i++){
		scanf("%d",a+i);
	}
	printf("a[]={%d",a[0]);
	for(i=1;i<N;i++) printf(",%d",a[i]);//打印初始数组
	printf("}\n");
	printf("m=");scanf("%d",&m);
	sort(a,m);
	printf("a[]={%d",a[0]);
	for(i=1;i<N;i++) printf(",%d",a[i]);//打印处理后数组 
	printf("}\n"); 
	system("pause");
	return 0;
}

