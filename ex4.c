#include<stdio.h>
#include<stdlib.h>

int main(){
  int i, num, heads=0, tails=0;
  
  //名前を聞くパート
  char str[8];
  printf("あんた誰? ");
  scanf("%s", str);
  printf("ハロー、%s\n", str);
    
  //コイントスのパート  
  printf("Tossing a coin...\n");
  
  for(i = 0; i < 3; i++){
    num = rand();
    if(num%2==0){
      printf("Round %d: Head\n", i+1);
      heads++;
    } else {
      printf("Round %d: Tail\n", i+1);
      tails++;
    }
  }
  
  printf("Heads: %d, Tails: %d\n", heads, tails);
  
  if(heads>tails) printf("You win!\n");
  else printf("You lose!\n");
  
  return 0;
}  
