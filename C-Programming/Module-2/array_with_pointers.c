/*
Accessing the elements of array by using pointers
and sizeof operator
*/

#include <stdio.h>

int main(void){
  int A[] = {1,27,0,-100,5,30}, *ptr, i;
  ptr = &A[0]; // stroing the address of A[0] in ptr and *ptr will point out to value at location A[0]
  for (i=0; i<6; i++){
    printf("A[%d]=%d",i, A[i]);
    printf("and contents in `ptr+%d` is %d\n",i, *(ptr++));
  }

// sizeof operator
  printf("\n\nSizeof operator\n");
  printf("int: %d bytes, char: %d bytes, float: %d bytes", sizeof(int), sizeof(char), sizeof(float));



  return 0;
}
