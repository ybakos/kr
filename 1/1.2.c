/*
  Name: F and C
  Copyright: 2009
  Author: Yong Bakos
  Date: 01/10/09 09:40PM
  Description: page 9, 12, 13
*/
#include <stdio.h>

int main() {
  float f, c;
  int lower, upper, step;
  lower = 0;
  upper = 300;
  step = 20;
  f = lower;
  printf("%2c\t%4c\n", 'F', 'C');
  while (f <= upper) {
    //c = (5 * (f - 32)) / 9;
    c = (5.0/9.0) * (f - 32);
    printf("%3.0f\t%6.2f\n", f, c);
    f = f + step;
  }
  printf("Hello There.");
  return 0;
}