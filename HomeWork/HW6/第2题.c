#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main()
{
	char a[1000];int i,j,m;int b[26];
	for(i=0;i<26;i++) b[i]=0;
	printf("Please input the text:\n");
	for(i=0;i<1000;i++){
		scanf("%c",&a[i]);
		if(a[i]=='\n') break;
	}
	m=i;
	for(i=0;i<m;i++){
		if(a[i]>=65&&a[i]<=90) b[a[i]-65]++;
		if(a[i]>=97&&a[i]<=122) b[a[i]-97]++;
	}
	j=0;
	for(i=0;i<26;i++){
		printf("%c=%d\t",i+65,b[i]);
		j++;
		if(j%8==0) printf("\n");
	}
	system("pause");
	return 0;
}

