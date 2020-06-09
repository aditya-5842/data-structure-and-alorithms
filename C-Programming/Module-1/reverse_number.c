// inverse a given postive intiger number
#include <stdio.h>

int main(){
  int x, y = 0;
  printf("Input the value of x: ");
  scanf("%d", &x);
  while (x>0) {
    y = y*10+x%10;
    x /= 10;
  }
  printf("Reversed Number is %d", y);
}
