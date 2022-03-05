#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
void replygood(int x){
	if(x==0) printf("Very good!\n\n");
	else if(x==1) printf("Excellent!\n\n");
	else printf("Keep up the good work!\n\n");
}
void replybad(int x){
	if(x==0) printf("No. Please try again.\n");
	else if(x==1) printf("Wrong. Try once more.\n");
	else printf("No. Keep trying.\n");	
}
int main()
{
	int sup,inf,n;int i;int x,y,ans;int sum=0;
	while(1){
		printf("supremum=");
		scanf("%d",&sup);
		printf("infimum=");
		scanf("%d",&inf);
		printf("number of questions=");
		scanf("%d",&n);
		if(inf<sup&&n>0) break;
		else printf("illegal input!\n\n");
	}
	srand((unsigned)time(NULL));
	printf("Now let's begin!\n\n");
	for(i=0;i<n;i++){
		x=rand()%(sup-inf)+inf;y=rand()%(sup-inf)+inf;
		printf("%d¡Á%d=",x,y);
		scanf("%d",&ans);
		if(ans==x*y){
			replygood(rand()%3);
			sum++;
		}
		else{
			replybad(rand()%3);
			printf("The correct answer is:%d\n\n",x*y);
		}
	}
	printf("Your accuracy is %d/%d=%.2f%%\n",sum,n,(float)sum/n*100);
	system("pause");
	return 0;
}

