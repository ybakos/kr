/*
  Name: 1.10 1-20
  Copyright: 2011
  Author: Yong Bakos
  Date: 10/13/11 10:43AM
  Description: page 34. This program replaces tabs with spaces.
*/
#include <stdio.h>

#define TAB_WIDTH 8

int main() {
  int c, position;
  position = 0;
  while ( (c = getchar()) != EOF) {
    if (c == '\t') {
      while (position % (TAB_WIDTH) != 0) {
        putchar(' ');
        ++position;
      }
    } else if (c == '\n') {
      putchar(c);
      position = 0;
    } else {
      putchar(c);
      ++position;
    }
  }

  return 0;
}