/*
string: stings is sequence of characters enclosed in double quotes
  e.g. char s[2]="a";//takes two bytes of storage, one is for 'a' and another one is for null character '\0'
character: are enclosed in single quote
  e.g. char s='a'; //take only 1 byte of storage
*/

#include <stdio.h>
#include <string.h>

int main(){
  char *a1 = "hello world";//pointer to a constant string
  char a2[] = "hello world is very common"; //constant pointer to string
  char a3[6] = "hello";
  printf("%d,%d\n", sizeof(a1), sizeof(a2));
  printf("a1: %s,  a2: %s\n", a1, a2);
  // a1[1] = 'u'; //undefined beahiour
  a1=a2;
  printf("a1: %s", a1);
  // a2=a3; //error
  return 0;
}
