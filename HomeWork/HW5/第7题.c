#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main()
{
	int i,i2,i3;
	for(i=1;i<=10;i++){
		i2=pow(i,2);i3=pow(i,3);
		printf("%2d^2=%3d\t%2d^3=%4d\n",i,i2,i,i3);
	}
	system("pause");
	return 0;
}

