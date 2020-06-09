// find first 10 fibbonacci series
// remeber it start from 0;
// 0,1,1,2,3,5,8,13...

#include <stdio.h>
#define N 20
int main(){
  int Fib[N];
  Fib[0]=0;
  Fib[1]=1;
  for (int i=2; i<N; i++){
    Fib[i] = Fib[i-1]+Fib[i-2];
  }
  printf("Fibbonacci series (%d): \n", N);
  for (int i=0; i<N;i++){
  printf("%d\n",Fib[i]);
  }
}
