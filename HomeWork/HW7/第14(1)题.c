#include<stdio.h>
#include<stdlib.h>
#define N 5
int flag(int i,int j){
	if(N%2==0){
		if((j==0||j==N-1)&&i%2==0) return 0;//向下 
		else if((i==0||i==N-1)&&j%2==1) return 1;//向右
		else if((i+j)%2==1) return 2;//向右上 
		else return 3;//向左下 
	}
	else{
		if(!(j==0&&i==N-1)&&(j==0&&i%2==0||j==N-1&&i%2==1)) return 0;//向下 
		else if(i==0&&j%2==1||i==N-1&&j%2==0) return 1;//向右
		else if((i+j)%2==1) return 2;//向右上 
		else return 3;//向左下 
	}
}
int main()
{
	int a[N][N];int i=0,j=0,x=1;
	while(i<N&&j<N){
		a[i][j]=x++;
		switch(flag(i,j)){
			case 0: i++;break; 
			case 1: j++;break;
			case 2: j++;i--;break;
			case 3: j--;i++;break;
		}
	}
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}

