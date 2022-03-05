#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define Node struct node
Node{
	int value;
	Node* next;
};
Node* CreateNode(Node* last,int n){
	Node* p;
	p=(Node*)malloc(sizeof(Node));
	p->next=last->next;last->next=p;p->value=n;
	return p;
}
void Initialize(Node* head){
	Node* temp;int n;int rg,num,cc;int i;
	printf("num=");scanf("%d",&num);
	printf("range=");scanf("%d",&rg);
	srand((unsigned)time(NULL));
	temp=head;
	for(i=0;i<num;i++){
		cc=rand()%rg;
		temp=CreateNode(temp,cc);
	}
}
void Output(Node* head){
	Node* wk=head->next;int i=0;
	while(wk){
		printf("Node[%d]=%d\n",i,wk->value);
		i++;
		wk=wk->next;
	}
}
void DeleteNode(Node* last){
	Node* p=last->next;
	last->next=p->next;free(p);
}
void SearchnDelete(Node *head){
	Node *wk=head->next;int i=1,j=1,min=wk->value;
	while(wk){
		if(wk->value<min){
			min=wk->value;j=i;
		}
		i++;wk=wk->next;
	}
	wk=head;
	for(i=1;i<j;i++){
		wk=wk->next;
	}
	DeleteNode(wk);
}
int main()
{
	Node *head;
	head=(Node*)malloc(sizeof(Node));head->next=NULL;
	printf("List initializing...\n");Initialize(head);
	printf("List outputing...\n");Output(head);
	printf("Searching List...\n");SearchnDelete(head);printf("Deleting node...\n");
	printf("List outputing...\n");Output(head);
	system("pause");
	return 0;
}

