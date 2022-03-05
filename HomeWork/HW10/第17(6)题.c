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
	}//寻找起始位置 
	len-=i;
	for(j=0;j<len;j++){
		*(s+j)=*(s+j+i);
	}//删除前导空格 
	for(j=0;j<len-1;j++){
		if(*(s+j)==' '&&*(s+j+1)==' '){
			len--;
			for(k=j;k<len;k++){
				*(s+k)=*(s+k+1);
			}
			j--;
		}
	}//中间连续空格处理 
	while(*(s+len-1)==' '){
		len--;
	}//删除后随空格 
	*(s+len)='\0';//重置结束符 
	puts(s);
	system("pause");
	return 0;
}

