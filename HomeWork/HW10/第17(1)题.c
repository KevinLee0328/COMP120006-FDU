#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 5
int main()
{
	int a[N][N];int(*p)[N];int i,j,temp;
	p=a;
	srand((unsigned)time(NULL));
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			*(*(p+i)+j)=rand()%10;
		}
	}//初始化数组 
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("%4d",*(*(p+i)+j));
		}
		printf("\n");
	}//打印初始数组
	printf("********************\n");
	for(i=0;i<N;i++){
		for(j=i;j<N;j++){
			temp=*(*(p+i)+j);*(*(p+i)+j)=*(*(p+j)+i);*(*(p+j)+i)=temp;
		}
	}//交换操作
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("%4d",*(*(p+i)+j));
		}
		printf("\n");
	}//打印交换数组
	system("pause");
	return 0;
}

