#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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
void Intersection(Node* head1,Node* head2){
	Node *wk1=head1,*wk2=head2->next;int flag=0;
	while(wk1->next){
		flag=0;wk2=head2->next;
		while(wk2){
			if(wk2->value==wk1->next->value) flag=1;
			wk2=wk2->next;
		}
		if(!flag) {
			DeleteNode(wk1);
			continue; 
		}
		wk1=wk1->next;
	}
}
void Union(Node* head1,Node* head2){
	Node *wk1=head1->next,*wk2=head2->next; 
	while(wk1){
		wk2=head2->next;
		while(wk2){
			if(wk1->next&&wk2->value>wk1->value&&wk2->value<wk1->next->value||!wk1->next&&wk2->value>wk1->value){
				CreateNode(wk1,wk2->value);
				break;
			}
			wk2=wk2->next;
		}
		wk1=wk1->next;
	}
} 
void Difference(Node* head1,Node* head2){
	Node *wk1=head1,*wk2=head2->next;int flag=0;
	while(wk1->next){
		flag=0;wk2=head2->next;
		while(wk2){
			if(wk2->value==wk1->next->value) flag=1;
			wk2=wk2->next;
		}
		if(flag) {
			DeleteNode(wk1);
			continue; 
		}
		wk1=wk1->next;
	}
}
int main()
{
	Node *head1,*head2,*wk,*temp;int s1[]={2,3,5,6},s2[]={3,4,6,8};int i;int fc;
	head1=(Node*)malloc(sizeof(Node));head1->next=NULL;
	head2=(Node*)malloc(sizeof(Node));head2->next=NULL;
	temp=head1;
	for(i=0;i<4;i++){
		temp=CreateNode(temp,*(s1+i));
	}
	temp=head2;
	for(i=0;i<4;i++){
		temp=CreateNode(temp,*(s2+i));
	}
	printf("S1 outputing...\n");Output(head1);
	printf("S2 outputing...\n");Output(head2);
	printf("function(1:¡É,2:¡È,3:\\)=");scanf("%d",&fc);
	if(fc==1){Intersection(head1,head2);printf("S1¡ÉS2");}
	else if(fc==2){Union(head1,head2);printf("S1¡ÈS2");}
	else if(fc==3){Difference(head1,head2);printf("S1\\S2");}
	printf(" outputing...\n");Output(head1);
	system("pause");
	return 0;
}

