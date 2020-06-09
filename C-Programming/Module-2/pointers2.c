/*
demo of pointers
*/
#include <stdio.h>

int main(void){
  int a = 10, b = 5, *ptr;
  ptr = &b;
  printf("a has value %d and is stored at %p\n", a, (void *)&a);
  printf("b has value %d and is stored at %p\n", b, (void *)&b);
  printf("ptr has value %p and is stored at %p\n", ptr, (void *)&ptr);
  printf("the value of intiger pointed by ptr pointer is: %d", *ptr);
  return 0;
}
