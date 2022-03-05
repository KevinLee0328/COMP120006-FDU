# include<stdio.h> 
# include<stdlib.h>
# define N 10
int a[]={9,8,7,6,5,4,3,2,1,0}; 
int i,j,n=0;
void swap(void){
	int temp;
	temp=a[j];a[j]=a[j-1];a[j-1]=temp;
	n++;
}
int main(){
	for(i=0;i<N;i++){
		for(j=N-1;j>i;j--){
			if(a[j]<a[j-1]) swap();
		}
	}
	printf("a[]={%d",a[0]);
	for(i=1;i<N;i++) printf(",%d",a[i]);
	printf("}\n");
	printf("n=%d\n",n);
	system("pause");
	return 0;
}
