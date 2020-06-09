/*
function to find all prime numbers which are less than `N`
rule: 2 is only even prime number
      3 is the smallest odd number
      number (`p`) greater than 3 must be checked with following conditions
        I. check all prime numbers i < p, if `i` divides `p` then `p` is a composite number
        II. If there is no such `i` that divides `p` then `p` is prime number
Hack: I. don't check all prime numbers if `p` is divisible by atleast one number
      II. check only till those numbers which are less than are equal to `sqrt(p)`
      III. skip all even numbers
"""
*/

#include <stdio.h>
#include <math.h>

// #define N 10 // keep N greater than 1

int main(){
  int N;
  printf("Enter N: ");
  scanf("%d", &N);
  int prime[N], Prime_index;

  if (N==2){
    prime[0]=2;
    Prime_index = 1;
  }
  else if (N<=4){
    prime[0]=2;
    prime[1]=3;
    Prime_index = 2;
  }
  else {
    prime[0]=2;
    prime[1]=3;
    Prime_index = 2;
    int is_prime;
    float max_possible_divisible;
    for (int p=5; p<=N; p+=2){ // p+=2 : to get only odd numbers
      is_prime = 1;
      max_possible_divisible = ceil(sqrt(p));
      for (int i=1; i<Prime_index; i++){ //skipping prime[0]==2, becasue we've skipped all even numbers
        if (prime[i]<=max_possible_divisible){
          if (p%prime[i]==0){
            is_prime = 0;
            break;
          }
        }
      }
      if (is_prime==1){
        prime[Prime_index]=p;
        Prime_index += 1;
      }
    }
  }
  printf("\nAll Prime numbers which are <= %d\n", N);
  for (int i = 0; i<Prime_index; i++){
    printf("%d ", prime[i]);
  }
  return 0;
}
