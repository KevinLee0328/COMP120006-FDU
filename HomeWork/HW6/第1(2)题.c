#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define N 10
int main()
{
	int a[]={0,1,2,3,4,5,6,7,8,9};int i,key;
	printf("a[]={%d",a[0]);
	for(i=1;i<N;i++) printf(",%d",a[i]);//打印初始数组
	printf("}\nkey="); 
	scanf("%d",&key);
	for(i=0;i<N;i++){
		if(a[i]==key){
			printf("index=%d\n",i);
			break;
		}
	}
	if(i==N) printf("error! no element=key\n");
	system("pause");
	return 0;
}

