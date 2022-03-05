#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
int strtonum(char num[10]){
	int no=0;int i;
	for(i=0;*(num+i)!='\n'&&*(num+i);i++){
		no=no*10+*(num+i)-'0';
	}
	return no;
}
void main()
{
	FILE *fp;char fname[40],numtemp[10];int num[100];int n,rng,number;int i;int max,min;
	printf("n=");scanf("%d",&n);
	printf("range=");scanf("%d",&rng);
	printf("file name:");scanf("%s%*c",fname);
	if((fp=fopen(fname,"w+"))==NULL){
		printf("Fail to open %s!\n",fname);
		return;
	}
	srand((unsigned)time(NULL));
	for(i=0;i<n;i++){
		number=rand()%rng;
		fprintf(fp,"%d\n",number);
	}
	rewind(fp);i=0;
	while(!feof(fp)){
		fgets(numtemp,10,fp);
		num[i]=strtonum(numtemp);i++;
	}
	printf("number of integer=%d\n",i-1);
	max=num[0];min=num[0];
	for(i=0;i<n;i++){
		if(num[i]<min) min=num[i];
		if(num[i]>max) max=num[i];
	}
	printf("max=%d\tmin=%d\n",max,min);
	fclose(fp);
	return;
}

