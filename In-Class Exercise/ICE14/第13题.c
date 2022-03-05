#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define Node struct node
Node{
	char value;
	int flag;
	Node* next;
};
Node* CreateNode(Node* last,char n){
	Node* p;
	p=(Node*)malloc(sizeof(Node));
	p->next=last->next;last->next=p;p->value=n;p->flag=1;
	return p;
}
int main()
{
	Node *head,*temp,*wk;char plain[100],cipher[100];int i=0,j=0,key;
	head=(Node*)malloc(sizeof(Node));head->next=NULL;
	printf("Plaintext:\n");gets(plain);
	printf("key=");scanf("%d",&key);
	temp=head;
	for(i=0;*(plain+i);i++){
		temp=CreateNode(temp,*(plain+i));
	}
	temp->next=head->next;wk=head;i=0;
	while(j<strlen(plain)){
		do{wk=wk->next;}while(!wk->flag);
		i++;
		if(i==key){
			cipher[j]=wk->value;wk->flag=0;
			j++;i=0;
		}
	}
	cipher[j]='\0';
	printf("Ciphertext:\n");puts(cipher);
	system("pause");
	return 0;
}

