#include <stdio.h>
int main(){
  char x,y,R,L,S,P,C;//x for player1,y for player 2,R=Rock,L=Lizard,S=Spock,P=Paper,C=Scissor
  scanf("%s %s" ,&x,&y);
 
  if ((x=='C' && y=='P')|| (x=='P' && y=='R') || (x=='R' && y=='L') || (x=='L' && y=='S') || (x=='S' && y=='C') || (x=='C' && y=='L') || (x=='L' && y=='P') || (x=='P' && y=='S') || (x=='S' && y=='R') || (x=='R' && y=='C')){
	printf("Player 1 wins\n");
  }else if((x=='P' && y=='C')|| (x=='R' && y=='P') || (x=='L' && y=='R') || (x=='S' && y=='L') || (x=='C' && y=='S') || (x=='L' && y=='C') || (x=='P' && y=='L') || (x=='S' && y=='P') || (x=='R' && y=='S') || (x=='C' && y=='R')){
	printf("Player 2 wins\n");
  }else if ((x=='C' && y=='C')|| (x=='P' && y=='P') || (x=='R' && y=='R') || (x=='L' && y=='L') || (x=='S' && y=='S')){
	printf("Tie\n");
  }else{
	printf("Wrong input\n");
  }

return 0;
}
