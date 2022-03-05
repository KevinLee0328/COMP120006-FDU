#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 120
void delete(char *p,int len){
	int i,j,k;
	for(i=0;i<len-1;i++){
		for(j=i+1;j<len;j++){
			if(*(p+i)==*(p+j)){
				for(k=j;k<len-1;k++) *(p+k)=*(p+k+1);
				len--;j--;
			}
		}
	}
	*(p+len)='\0';
}
int main()
{
	int len;char s[N];
	gets(s);
	len=strlen(s);
	delete(s,len);
	puts(s);
	system("pause");
	return 0;
}

