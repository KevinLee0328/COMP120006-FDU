#include<stdio.h>
#include<string.h>
int check(int x){
	int i;
	if(x==2) return 1;
	for(i=2;i<x;i++){
		if(x%i==0) return 0;
	}
	return 1;
}
void input(char* str){
	gets(str);
}
int convert(char* str){
	int n=0;int i,j;
	for(i=0;*(str+i);i++);
	for(j=0;j<i;j++){
		if(*(str+j)>='A'&&*(str+j)<='F') n=n*16+(*(str+j)-'A'+10);
		else n=n*16+(*(str+j)-'0');
	}
	return n;
}
int Maxprime(int n){
	int i;
	for(i=n;i>=2;i--){
		if(check(i)) return i;
	}
}
void output(int prime){
	printf("%d",prime);
}
int main(){
	char str[100];int n,prime;
	input(str);
	n=convert(str);
	prime=Maxprime(n);
	output(prime);
	return 0;
}
