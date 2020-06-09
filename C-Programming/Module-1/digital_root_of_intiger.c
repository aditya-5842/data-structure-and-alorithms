// code for finding the digital root of an intiger
// number = 12345; 1+2+3+4+5=15; 1+5=6; so output will be 6

#include <stdio.h>

int main(){
  int n;
  printf("Enter the number: ");
  scanf("%d", &n);
  while (n>9) {
    int sum=0;
    while(n>0){
      sum += n%10;
      n /= 10;
    }
    n = sum;
  }
  printf("Digital Root of given input: %d", n);
}
