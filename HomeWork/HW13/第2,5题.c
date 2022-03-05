#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define CLASS 4
struct student{
	int number;
	char name[20];
	int score[CLASS];
}; 
void input(struct student* stu,int n){
	int i,j;
	printf("input students\' information:\n");
	for(i=0;i<n;i++){
		scanf("%d",&(stu+i)->number);
		scanf("%s",(stu+i)->name);
		for(j=0;j<CLASS;j++){
			scanf("%d",(stu+i)->score+j);
		}
	}
}
void sum(struct student* stu,int n){
	int sb;int i;int sumscore=0;
	printf("subject number(0-%d)=",CLASS-1);scanf("%d",&sb);
	for(i=0;i<n;i++){
		sumscore+=*((stu+i)->score+sb);
	}
	printf("sum of subject %d =%d\n",sb,sumscore);
}
void average(struct student* stu,int n){
	int sb;int i;int sumscore=0;float avgscore=0;
	printf("subject number(0-%d)=",CLASS-1);scanf("%d",&sb);
	for(i=0;i<n;i++){
		sumscore+=*((stu+i)->score+sb);
	}
	avgscore=sumscore/(float)n;
	printf("average of subject %d =%.2f\n",sb,avgscore);
}
void search(struct student* stu,int n){
	int sr;int i=0,j;int tgnum;char tgname[20];int flag=1;
	printf("search by(1:number,2:name)=");scanf("%d",&sr);
	if(sr==1){
		printf("number=");scanf("%d",&tgnum);
		while(i<n){
			if(tgnum==(stu+i)->number){flag=0;break;}
			i++;
		} 
		if(flag) printf("404 not found!\n");
		else{
			printf("%d %s ",(stu+i)->number,(stu+i)->name);
			for(j=0;j<CLASS;j++){
				printf("%d ",*((stu+i)->score+j));
			}
			printf("\n");
		}
	}
	else if(sr==2){
		printf("name=\n");scanf("%s",tgname);
		while(i<n){
			if(!strcmp(tgname,(stu+i)->name)){flag=0;break;}
			i++;
		} 
		if(flag) printf("404 not found!\n");
		else{
			printf("%d %s ",(stu+i)->number,(stu+i)->name);
			for(j=0;j<CLASS;j++){
				printf("%d ",*((stu+i)->score+j));
			}
			printf("\n");
		}
	} 
}
void output(struct student* stu,int n){
	int i,j;
	for(i=0;i<n;i++){
		printf("%d %s ",(stu+i)->number,(stu+i)->name);
		for(j=0;j<CLASS;j++){
			printf("%d ",*((stu+i)->score+j));
		}
		printf("\n");
	}
}
int main()
{
	int n,fc;struct student* stu;
	printf("number of students=");scanf("%d",&n);
	stu=(struct student*)malloc(n*sizeof(struct student));
	while(1){
		printf("function(1:input,2:sum,3:average,4:search,5:output)=");scanf("%d",&fc);
		if(fc<1||fc>5) {printf("error!\n");continue;}
		else if(fc==1) input(stu,n);
		else if(fc==2) sum(stu,n);
		else if(fc==3) average(stu,n);
		else if(fc==4) search(stu,n);
		else if(fc==5) output(stu,n);
	}
	return 0;
}

