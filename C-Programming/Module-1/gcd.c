// find the GCD of given two numbers
// using Eucldian Algo

#include <stdio.h>

int main(){
  int m,n,temp;
  printf("Enter the value of m and n: ");
  scanf("%d%d", &m,&n);
  if(n>m){
    temp = m;
    m = n;
    n = temp;
  }
  printf("m=%d and n=%d", m,n);
  temp = m%n;
  while (temp!=0) {
    m = n;
    n = temp;
    temp = m%n;
  }
  printf("\nGCD is: %d",n);

  return 0;
}
