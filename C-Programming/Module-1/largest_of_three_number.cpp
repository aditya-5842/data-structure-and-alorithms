// this is program to find the larges of three numbers

#include <stdio.h>

int main(){
  int A, B, C;
  printf("Enter the values of A, B and C: ");
  scanf("%d%d%d", &A, &B, &C );
  if(A>B){
    if(A>C){
      printf("A=%d is the largest", A);
    }
    else{
      printf("C=%d is the largest", C);
    }
  }
  else{
    if(B>C){
      printf("B=%d is the largest", B);
    }
    else{
      printf("C=%d is the largest", C);
    }
  }
}
