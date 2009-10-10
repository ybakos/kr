/*
  Name: 1.5.3 Line Counting
  Copyright: 2009
  Author: Yong Bakos
  Date: 03/10/09 09:46AM
  Description: page 19
*/
#include <stdio.h>

int main() {
  int c, lines;
  lines = 0;
  while ((c = getchar()) != EOF) {
    if (c == '\n') lines++;
  }
  return 0;
}