#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,k=0;
	for(i=31;i<127;i++){
		if(k++%10==0)/*Ã¿ÐÐ10¸ö*/
			printf("\n");
		printf("%3c(%3d)",i,i);
	}
	printf("\n");
	system("pause");
	return 0;
}