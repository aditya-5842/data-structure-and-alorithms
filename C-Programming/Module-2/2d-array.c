/*
make a 2-D array and print its all element row-wise
*/
#include <stdio.h>

#define M 4
#define N 3

int main(){
  int A[M][N], i, j;
  for (i=0; i<M; i++){
    for (j=0; j<N; j++){
      A[i][j] = i+j;
    }
  }
  for (i=0; i<M; i++){
    printf("Row %d: ", i);
    for (j=0; j<N; j++){
      printf("%d ", A[i][j]);
    }
    printf("\n");
  }
}
