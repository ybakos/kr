/*
  Name: C and F
  Copyright: 2009
  Author: Yong Bakos
  Date: 01/10/09 09:55PM
  Description: page 13
*/
#include <stdio.h>

int main() {
  float f, c;
  int lower, upper, step;
  lower = -20;
  upper = 200;
  step = 20;
  c = lower;
  printf("%2c\t%4c\n", 'C', 'F');
  while (c <= upper) {
    //c = (5 * (f - 32)) / 9;
    f = (9/5) * c + 32;
    printf("%3.0f\t%6.2f\n", c, f);
    c = c + step;
  }
  printf("Hello There.");
  return 0;
}