#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main()
{
	int i;long ans=1;
	for(i=1;;i++) {
		printf("%ld\n",ans);
		ans*=2;
		if(ans<=0) break;
	}
	printf("%ld\n",ans);
	system("pause");
	return 0;
}


