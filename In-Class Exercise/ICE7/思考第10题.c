#include<stdio.h>
#include<string.h> 
#define N 120
void main()
{
	int k=0,i,upper[10]={0},lower[10]={0},digital[10]={0},others[10]={0};int uppert,lowert,digitalt,otherst; 
	char s[N];
	uppert=lowert=digitalt=otherst=0;
	printf("������10�������ַ�������Ctrl+Z�������룺\n");
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
		printf("��%d�д�д��ĸ������%d\n",i+1,upper[i]);
		printf("��%d��Сд��ĸ������%d\n",i+1,lower[i]);
		printf("��%d�����ָ�����%d\n",i+1,digital[i]);
		printf("��%d�������ַ�������%d\n",i+1,others[i]);
		printf("\n");
	}
	for(i=0;i<k;i++){
		uppert+=upper[i];lowert+=lower[i];digitalt+=digital[i];otherst+=others[i];
	}
	printf("��д��ĸ������%d\n",uppert);
	printf("Сд��ĸ������%d\n",lowert);
	printf("����������%d\n",digitalt);
	printf("�����ַ�������%d\n",otherst);
	printf("\n");
}

