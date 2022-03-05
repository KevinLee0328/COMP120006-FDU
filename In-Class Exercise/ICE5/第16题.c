#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main()
{
	double pi,delta;int k=1,t=1;long i;int flag1=1,flag2=1,flag3=1,flag4=1;
	for(i=1;i<1e7;i++){
		pi+=4.*k/t;
		t+=2;
		k=-k;
		if(fabs(pi-3.14)<5e-3 && flag1) {printf("get pi=3.14 after %ld terms\n",i);flag1--;}
		else if(fabs(pi-3.141)<5e-4 && flag2) {printf("get pi=3.141 after %ld terms\n",i);flag2--;}
		else if(fabs(pi-3.1415)<5e-5 && flag3) {printf("get pi=3.1415 after %ld terms\n",i);flag3--;}
		else if(fabs(pi-3.14159)<5e-6 && flag4) {printf("get pi=3.14159 after %ld terms\n",i);flag4--;}
	}
	printf("pi=%lf\n",pi);
	system("pause");
	return 0;
}


