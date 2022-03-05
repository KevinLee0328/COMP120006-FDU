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
		(last->next->count)++;
	}
}
void write(Node* head){
	Node* wk=head->next;int i=0;
	while(wk){
		printf("Node[%d]=%d(count=%d)\n",i,wk->value,wk->count);
		i++;
		wk=wk->next;
	}
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
	FILE *fp;Node *h;char fname[40],numtemp[10];int number;
	h=(Node*)malloc(sizeof(Node));h->next=NULL;
	printf("file name:");scanf("%s%*c",fname);
	if((fp=fopen(fname,"r"))==NULL){
		printf("Fail to open %s!\n",fname);
		return;
	}
	while(!feof(fp)){
		fgets(numtemp,10,fp);
		number=strtonum(numtemp);insert(h,number);
	}
	write(h);
	fclose(fp);
	return;
}

