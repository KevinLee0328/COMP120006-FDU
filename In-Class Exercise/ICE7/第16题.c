#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 120 
int main()
{
	int i=0,j,k,len;char s[N];
	gets(s);
	len=strlen(s);
	while(s[i]==' '){
		i++;
	}
	for(j=0;j<len-i;j++){
		s[j]=s[j+i];
	}
	len-=i;
	for(j=0;j<len-1;j++){
		if(s[j]==' '&&s[j+1]==' '){
			for(k=j;k<len-1;k++){
				s[k]=s[k+1];
			}
			len--;j--;
		}
	}
	while(s[len-1]==' '){
		len--;
	}
	s[len]='\0';
	puts(s);
	system("pause");
	return 0;
}

