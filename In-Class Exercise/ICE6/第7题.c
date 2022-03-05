#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define N 1000 
int main()
{
	int a[N];int i,j;
	a[0]=0;a[1]=0;
	for(i=2;i<N;i++){
		a[i]=1;//数组元素初始化置1 
	}
	for(i=2;;i++){
		for(j=2;;j++){
			if(i*j>=N) break;
			a[i*j]=0;//非质数置0 
		}
		if(i>=N/2) break;
	}
	j=0;
	printf("All prime numbers<%d are:\n",N);
	for(i=2;i<N;i++){
		if(a[i]==1){
			printf("%d\t",i);//顺序输出质数 
			j++;
			if(j%10==0)	printf("\n");//10个换行 
		}
	}
	system("pause");
	return 0;
}

