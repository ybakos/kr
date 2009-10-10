/*
  Name: F and C with for
  Copyright: 2009
  Author: Yong Bakos
  Date: 01/10/09 10:00PM
  Description: page 14
*/
#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP  20

int main() {
  float f;
  printf("%2c\t%4c\n", 'F', 'C');
  for (f = UPPER; f >= LOWER; f = f - STEP)
    printf("%3.0f\t%6.2f\n", f, (5.0/9.0) * (f - 32));
  return 0;
}