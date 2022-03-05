#include<stdio.h>
#include<stdlib.h>
#define N 5
void opt1(int (*score)[5]){
	int student;int i=0,j,flag=1; 
	printf("请输入学号：");scanf("%d",&student);
	while(flag){
		if(i==N) {printf("error!\n");break;}
		if(**(score+i)==student){
			for(j=0;j<5;j++){
				printf("%d\t",*(*(score+i)+j));
			}
			printf("\n");
			flag=0;
		}
		i++;
	}
}
void opt2(int (*score)[5],int *student){
	int temp;int i,j,k;int flag;
	printf("请输入学生表并以0结尾：\n");
	for(i=0;i<=N;i++){
		scanf("%d",&temp);
		if(i!=N){
			*(student+i)=temp;
			if(!temp) break;
		}
	}
	for(i=0;i<N;i++){
		if(*(student+i)){
			flag=1;
			for(j=0;j<N;j++){
				if(**(score+j)==*(student+i)){
					for(k=0;k<5;k++){
						printf("%d\t",*(*(score+j)+k));
					}
					printf("\n");
					flag=0;
				}
			}
			if(flag) printf("error!\n");
		}
		else break;
	}
}
int main()
{
	int score[N][5],student[N]={0};int i,j;int n;
	printf("请输入成绩表：\n");
	for(i=0;i<N;i++) for(j=0;j<5;j++) scanf("%d",*(score+i)+j);
	while(1){
		printf("请选择功能(1or2)：");scanf("%d",&n);
		if(n<1||n>2) {printf("error!\n");continue;}
		if(n==1) opt1(score);
		if(n==2) opt2(score,student);
	}
	system("pause");
	return 0;
}

