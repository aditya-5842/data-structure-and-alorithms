/*
Traverse the elements of array in spiral order
*/

#include <stdio.h>

int main(){
  int M,N;
  printf("Enter size of 2-D matrix: ");
  scanf("%d%d", &M, &N);

  int A[M][N],i,j;
  // let's take intput from user (elements of array)
  for (i=0; i<M; i++){
    for (j=0; j<N; j++){
      scanf("%d", &A[i][j]);
    }
  }

  int top=0, bottom = M-1, left = 0, right = N-1;
  int cnt=0, B[M*N], cnt1;

  for (cnt1=1; cnt1<=M/2 && cnt1<=N/2; cnt1++){//to peal exactly min(m/2, n/2) times
    for (i=left; i<=right; i++){//for the top row
      B[cnt++] = A[top][i];
    }
    for (i=top+1; i<=bottom; i++){//for the right column
      B[cnt++] = A[i][right];
    }
    for (i=right-1; i>=left; i--){//for the bottom row
      B[cnt++] = A[bottom][i];
    }
    for (i= bottom-1; i>=top+1; i--){//for the left column
      B[cnt++] = A[i][left];
    }
    top++; bottom--;
    left++; right--;
  }
  // to cover the boundary cases: in case of when M or N or both are odd
  // if both are odd and equal, then after pealing it'll left with one un-Traversed element
  // and this time: top==bottom and left==right because indexing start at zero
  if (top==bottom && left==right){ //one element is left
    B[cnt++]=A[top][left];
  }
  else if (top < bottom){ //one column is left
    for (i=top; i<=bottom; i++){
      B[cnt++] = A[i][right];
    }
  }
  else if (left < right){//one row is left
    for (i=left; i<=right; i++){
      B[cnt++] = A[top][i];
    }
  }

  printf("\n");
  for (i=0; i<M*N-1; i++){
    printf("%d ", B[i]);
  }
  printf("%d", B[i]);

  return 0;
}
