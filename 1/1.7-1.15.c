/*
  Name: 1.7 1.15
  Copyright: 2009
  Author: Yong Bakos
  Date: 10/10/09 01:24PM
  Description: page 27
*/
#include <stdio.h>

double f_to_celsius(int);

int main() {
  float f;
  int lower, upper, step;
  lower = 0;
  upper = 300;
  step = 20;
  f = lower;
  printf("%2c\t%4c\n", 'F', 'C');
  while (f <= upper) {
    //c = (5 * (f - 32)) / 9;
    printf("%3.0f\t%6.2f\n", f, f_to_celsius(f));
    f = f + step;
  }
  printf("Hello There.");
  return 0;
}

double f_to_celsius(int f) {
    return (5.0/9.0) * (f - 32);
}