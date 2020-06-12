/*
concatenate given two strings
s1 = 'hello';//space needed 6 bytes
s2 = 'world';//space needed 6 bytes

result: 'helloworld' //space needed 11 bytes
*/

#include <stdio.h>
#include <string.h>
int main(){
  char s1[11]="Hello", s2[6]="World";
  int c=0, d = 0;
  while (s1[c] != '\0') {c++;}
  while (s2[d] != '\0') {d++;}
  int i=0;
  for (int j=c; j<=c+d; j++){
    s1[j] = s2[i];
    i++;
  }
  printf("%s\n", s1);
  printf("s1: %d, s2: %d\n", strlen(s1), strlen(s2));
}
