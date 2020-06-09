// product of two polynomial
// f1 = ax+b;, f2 = cx+d; f1*f2 = (ax+b)(cx+d) = acx^2+(ad+bc)x+bd

#include <stdio.h>

int main(){
  int a,b,c,d;
  int p2,p1,p0;

  printf("Enter the the value of A, B, C and D: ");
  scanf("%d%d%d%d", &a, &b, &c, &d);
  p2 = a*c;
  p1 = a*d+b*c;
  p0 = b*d;

  printf("Polynomial = %dx^2+%dx+%d",p2,p1,p0);
  return 0;
}
