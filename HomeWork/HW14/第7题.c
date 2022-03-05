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
	Node* temp;int n;int rg,num,cc=0;int i;
	printf("num=");scanf("%d",&num);
	printf("range=");scanf("%d",&rg);
	srand((unsigned)time(NULL));
	temp=head;
	for(i=0;i<num;i++){
		cc+=rand()%rg;
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
void Link(Node *head1,Node *head2,Node *head3){
	Node *wk1=head1->next,*wk2=head2->next,*wk3=head3;
	while(wk1||wk2){
		if(!wk1){
			wk3=CreateNode(wk3,wk2->value);
			wk2=wk2->next;
		}
		else if(!wk2){
			wk3=CreateNode(wk3,wk1->value);
			wk1=wk1->next;
		}
		else{
			if(wk1->value<=wk2->value){
				wk3=CreateNode(wk3,wk1->value);
				wk1=wk1->next;
			}
			else{
				wk3=CreateNode(wk3,wk2->value);
				wk2=wk2->next;
			}
		}
	}
}
int main()
{
	Node *head1,*head2,*head3;
	head1=(Node*)malloc(sizeof(Node));head1->next=NULL;
	head2=(Node*)malloc(sizeof(Node));head2->next=NULL;
	head3=(Node*)malloc(sizeof(Node));head3->next=NULL;
	printf("List1 initializing...\n");Initialize(head1);
	printf("List2 initializing...\n");Initialize(head2);
	printf("List1 outputing...\n");Output(head1);
	printf("List2 outputing...\n");Output(head2);
	printf("Linking List1 & List2...\n");Link(head1,head2,head3);
	printf("Linked List outputing...\n");Output(head3);
	system("pause");
	return 0;
}

