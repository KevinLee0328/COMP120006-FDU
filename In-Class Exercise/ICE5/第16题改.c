#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main()
{
	double pi,delta;int k=1,t=1;long i;int flag1=10,flag2=10,flag3=10,flag4=10;
	for(i=1;i<1e7;i++){
		pi+=4.*k/t;
		t+=2;
		k=-k;
		if(fabs(pi-3.14159)<5e-3 && flag1) {flag1--;if(flag1==1){printf("get steady pi=3.14 after %ld terms\n",i);flag1--;}}
		else if(fabs(pi-3.14159)<5e-4 && flag2) {flag2--;if(flag2==1){printf("get steady pi=3.141 after %ld terms\n",i);flag2--;}}
		else if(fabs(pi-3.14159)<5e-5 && flag3) {flag3--;if(flag3==1){printf("get steady pi=3.1415 after %ld terms\n",i);flag3--;}}
		else if(fabs(pi-3.14159)<5e-6 && flag4) {flag4--;if(flag4==1){printf("get steady pi=3.14159 after %ld terms\n",i);flag4--;}}
		if(fabs(pi-3.14159)>=5e-3 && flag1!=0) flag1=10;
		if(fabs(pi-3.14159)>=5e-4 && flag2!=0) flag2=10;
		if(fabs(pi-3.14159)>=5e-5 && flag3!=0) flag3=10;
		if(fabs(pi-3.14159)>=5e-6 && flag4!=0) flag4=10;
		if(flag1<9 && flag1>0) printf("flag1=%d i=%ld pi=%lf\n",flag1,i,pi);
		if(flag2<9 && flag2>0) printf("flag2=%d i=%ld pi=%lf\n",flag2,i,pi);
		if(flag3<9 && flag3>0) printf("flag3=%d i=%ld pi=%lf\n",flag3,i,pi);
		if(flag4<9 && flag4>0) printf("flag4=%d i=%ld pi=%lf\n",flag4,i,pi);
	}
	printf("flag1=%d flag2=%d flag3=%d flag4=%d\n",flag1,flag2,flag3,flag4);
	printf("pi=%lf\n",pi);
	system("pause");
	return 0;
}


