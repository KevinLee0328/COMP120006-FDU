#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
void plus(int x,int y,int z)
{
	int ans;
	ans=x+y+z;
	printf("The answer is:%d\n",ans);
}
void avg(int x,int y,int z)
{
	float ans;
	ans=(x+y+z)/3.;
	printf("The answer is:%f\n",ans);
}
void min(int x,int y,int z)
{
	int ans;
	if(x>y) ans=y;
	else ans=x;
	if(z<ans) ans=z;
	printf("The answer is:%d\n",ans);
}
void max(int x,int y,int z)
{
	int ans;
	if(x<y) ans=y;
	else ans=x;
	if(z>ans) ans=z;
	printf("The answer is:%d\n",ans);
}
int main()
{
	int x,y,z;int w;float ans;
	printf("Please input 3 integers:\n") ;
	scanf("%d%d%d",&x,&y,&z);
	printf("Please input the code of calculation(plus=1;avg=2;min=3;max=4):\n") ;
	scanf("%d",&w);
	if(w==1) plus(x,y,z);
	else if(w==2) avg(x,y,z);
	else if(w==3) min(x,y,z);
	else if(w==4) max(x,y,z);
	system("pause");
	return 0;
}


