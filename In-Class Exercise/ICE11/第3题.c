#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 10
void sort(char (*p)[100],int *s){
	int i,j;int temp;
	for(i=0;i<N;i++){
		for(j=N-1;j>i;j--){
			if(strcmp(*(p+*(s+j)),*(p+*(s+j-1)))<0){
				temp=*(s+j);*(s+j)=*(s+j-1);*(s+j-1)=temp;
			}
		}
	}
}
int main(){
	char a[N][100];int i;int s[N];
	for(i=0;i<N;i++) gets(*(a+i));
	for(i=0;i<N;i++) s[i]=i;
	sort(a,s);
	printf("\n");
	for(i=0;i<N;i++) puts(*(a+s[i]));
	system("pause");
	return 0;
}

