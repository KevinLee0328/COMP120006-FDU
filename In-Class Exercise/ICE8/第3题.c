#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int sup,inf;int n;int ans;int max,sum=0;
	while(1){
		printf("supremum=");
		scanf("%d",&sup);
		printf("infimum=");
		scanf("%d",&inf);
		printf("maximum opportunities=");
		scanf("%d",&max);
		if(inf<sup&&max>0) break;
		else printf("illegal input!\n\n");
	}
	srand((unsigned)time(NULL));
	n=rand()%(sup-inf)+inf;
	ans=n+1;
	while(ans!=n&&sum<10){
		printf("Please guess a number between %d and %d\n",inf,sup);
		scanf("%d",&ans);
		if(ans<inf||ans>sup){
			printf("illegal input!\n\n");
			continue;
		}
		if(ans!=n){
			if(ans>n) {printf("Too big! Please try again!\n\n");sup=ans-1;sum++;}
			else {printf("Too small! Please try again!\n\n");inf=ans+1;sum++;}
			if(sum==max) printf("Sorry, you have run out of opportunities.\n");
		}
		else {printf("Excellent!\n");printf("It takes you %d turns to get the correct answer.\n",sum+1);}
	}
	system("pause");
	return 0;
}

