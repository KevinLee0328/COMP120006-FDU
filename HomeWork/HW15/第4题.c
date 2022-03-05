#include<stdio.h>
#include<stdlib.h>
#define Node struct node
Node{
	int value;
	int count;
	Node* next;
};
void insert(Node* h,int n){
	Node *p,*last,*wk=h;
	if(h->next==NULL){
		last=h;
		p=(Node*)malloc(sizeof(Node));
		p->next=last->next;last->next=p;p->value=n;p->count=1;
		return;
	}
	while(wk->next&&wk->next->value<n){
		wk=wk->next;
	}
	last=wk;
	if(last->next==NULL||last->next->value>n){
		p=(Node*)malloc(sizeof(Node));
		p->next=last->next;last->next=p;p->value=n;p->count=1;
		return;
	}
	else{
		last->next->count++;
	}
}
void write(Node* head,FILE* tg){
	Node* wk=head->next;int i;
	while(wk){
		for(i=0;i<wk->count;i++){
			fprintf(tg,"%d\n",wk->value);
		}
		wk=wk->next;
	}
	printf("successful output!\n");
}
int strtonum(char num[10]){
	int no=0;int i;
	for(i=0;*(num+i)!='\n'&&*(num+i);i++){
		no=no*10+*(num+i)-'0';
	}
	return no;
}
void main()
{
	FILE *fp1,*fp2,*tg;Node *h;char fname1[40],fname2[40],numtemp[10];int number;int nt;
	h=(Node*)malloc(sizeof(Node));h->next=NULL;
	printf("file name1:");scanf("%s%*c",fname1);
	if((fp1=fopen(fname1,"r"))==NULL){
		printf("Fail to open %s!\n",fname1);
		return;
	}
	printf("file name2:");scanf("%s%*c",fname2);
	if((fp2=fopen(fname2,"r"))==NULL){
		printf("Fail to open %s!\n",fname2);
		return;
	}
	if((tg=fopen("output.txt","w"))==NULL){
		printf("Fail to open %s!\n","output.txt");
		return;
	}
	while(!feof(fp1)){
		fgets(numtemp,10,fp1);
		number=strtonum(numtemp);insert(h,number);
	}
	while(!feof(fp2)){
		fgets(numtemp,10,fp2);
		number=strtonum(numtemp);insert(h,number);
	}
	write(h,tg);
	fclose(fp1);fclose(fp2);fclose(tg);
	return;
}

