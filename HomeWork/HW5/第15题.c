#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main()
{
	int x,i;double t=1,ans=1;
	printf("calculate e^x x=");
	scanf("%d",&x);
	for(i=1;i<100;i++){
		t=t*x/i;
		ans+=t;
	}
	printf("e^x=%lf\n",ans);
	system("pause");
	return 0;
}

