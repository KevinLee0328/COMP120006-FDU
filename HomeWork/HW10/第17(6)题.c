#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 120 
int main()
{
	int i=0,j,k,len;char s[N];
	gets(s);
	len=strlen(s);
	while(*(s+i)==' '){
		i++;
	}//Ѱ����ʼλ�� 
	len-=i;
	for(j=0;j<len;j++){
		*(s+j)=*(s+j+i);
	}//ɾ��ǰ���ո� 
	for(j=0;j<len-1;j++){
		if(*(s+j)==' '&&*(s+j+1)==' '){
			len--;
			for(k=j;k<len;k++){
				*(s+k)=*(s+k+1);
			}
			j--;
		}
	}//�м������ո��� 
	while(*(s+len-1)==' '){
		len--;
	}//ɾ������ո� 
	*(s+len)='\0';//���ý����� 
	puts(s);
	system("pause");
	return 0;
}

