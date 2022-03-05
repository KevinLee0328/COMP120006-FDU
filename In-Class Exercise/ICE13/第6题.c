#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
struct poker{
	char suit;
	int number;
}; 
char* suit_list="SHDC";char* number_list="A23456789XJQK";char* player_list="ABCD";
void shuffle(struct poker (*player)[13]){
	int flag[52]={0};int i=0;int n;
	srand((unsigned)time(NULL));
	while(i<52){
		n=rand()%52;
		if(!flag[n]){
			player[i/13][i%13].suit=*(suit_list+n/13);player[i/13][i%13].number=n%13;
			flag[n]=1;i++;
		}
	}
}
void distribute(struct poker (*player)[13]){
	int i,j;
	for(i=0;i<4;i++){
		printf("%c:\n",*(player_list+i));
		for(j=0;j<13;j++){
			if(player[i][j].number==9) printf("%c%s, ",player[i][j].suit,"10");
			else printf("%c%c, ",player[i][j].suit,*(number_list+player[i][j].number));
		}
		printf("\n\n");
	}
}
void compare(void){
	char p[2][4];int num[2];int i;
	printf("Player1:\n");gets(*p);
	printf("Player2:\n");gets(*(p+1));
	for(i=0;i<2;i++){
		if(p[i][1]=='1') num[i]=10;
		else if(p[i][1]=='J') num[i]=11;
		else if(p[i][1]=='Q') num[i]=12;
		else if(p[i][1]=='K') num[i]=13;
		else if(p[i][1]=='A') num[i]=1;
		else num[i]=p[i][1]-'0';
	}
	if(num[0]>num[1]) printf("Player1 win.\n\n");
	else if(num[0]<num[1]) printf("Player2 win.\n\n");
	else printf("Draw.\n\n");
}
int main()
{
	struct poker player[4][13];
	printf("Shuffling...\n");
	shuffle(player);
	printf("Distributing...\n");
	printf("S=Spade,H=Heart,D=Diamond,C=Club\n\n");
	distribute(player);
	while(1){
		compare();
	}
	return 0;
}

