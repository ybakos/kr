/*
  Name: 1.8 call by value
  Copyright: 2009
  Author: Yong Bakos
  Date: 10/10/09 01:30PM
  Description: page 27
*/
#include <stdio.h>

int power(int m, int n); // int power(int, int); prototypes don't care 'bout var names

int main() {
  int i;
  
  for (i = 0; i < 10; ++i) {
    printf("%d %d %d\n", i, power(2, i), power(-3, i));
  }
  return 0;
}

// power: raise base to n-th power: n >= 0
int power(int base, int n) {
  int p;
  
  for (p = 1; n > 0; --n)
    p = p * base;

  return p;
}