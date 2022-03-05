#include<stdio.h>
#include<string.h> 
#define N 120
void main()
{
	int k=0,i,upper[10]={0},lower[10]={0},digital[10]={0},others[10]={0};int uppert,lowert,digitalt,otherst; 
	char s[N];
	uppert=lowert=digitalt=otherst=0;
	printf("请输入10行以内字符串并以Ctrl+Z结束输入：\n");
	while(gets(s)){
		for(i=0;s[i]!='\0';i++){
			if(s[i]>='A'&&s[i]<='Z') upper[k]++;
			else if(s[i]>='a'&&s[i]<='z') lower[k]++;
			else if(s[i]>='0'&&s[i]<='9') digital[k]++;
			else others[k]++;
		}
		k++;
	}
	for(i=0;i<k;i++){
		printf("第%d行大写字母个数：%d\n",i+1,upper[i]);
		printf("第%d行小写字母个数：%d\n",i+1,lower[i]);
		printf("第%d行数字个数：%d\n",i+1,digital[i]);
		printf("第%d行其他字符个数：%d\n",i+1,others[i]);
		printf("\n");
	}
	for(i=0;i<k;i++){
		uppert+=upper[i];lowert+=lower[i];digitalt+=digital[i];otherst+=others[i];
	}
	printf("大写字母总数：%d\n",uppert);
	printf("小写字母总数：%d\n",lowert);
	printf("数字总数：%d\n",digitalt);
	printf("其他字符总数：%d\n",otherst);
	printf("\n");
}

