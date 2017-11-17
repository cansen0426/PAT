#include <stdio.h>

int main() {
  int turn,A_speak,A_do,B_speak,B_do,A_cup=0,B_cup=0;
  scanf("%d",&turn);
  for (int i = 0; i < turn; i++) {
    scanf("%d %d %d %d",&A_speak,&A_do,&B_speak,&B_do);
    if(A_do==(A_speak+B_speak)&&(B_do!=A_do))
    {
      ++B_cup;
    }
    else if (B_do==(A_speak+B_speak)&&(A_do!=B_do))
    {
      ++A_cup;
    }
  }
  //a和b写反了
  printf("%d %d\n",A_cup,B_cup);
  return 0;
}
