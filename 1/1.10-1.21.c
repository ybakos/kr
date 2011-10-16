/*
  Name: 1.10 1-21
  Copyright: 2011
  Author: Yong Bakos
  Date: 10/14/11 08:02AM
  Description: page 34. This program spaces with tabs and spaces, where appropriate.
*/

#include <stdio.h>

#define TAB_WIDTH 8

int main() {
  int c, cursor, cuedSpaces;
  cursor = 0;
  cuedSpaces = 0;
  while ( (c = getchar()) != EOF) {
    if (c == ' ') {
      ++cuedSpaces;
      if (cursor % TAB_WIDTH == 0) {
        putchar('\t');
        cuedSpaces = 0;
      }
    } else if (c == '\t') {
      cuedSpaces = 0;
      putchar('\t');
    } else if (c == '\n') {
      while (cuedSpaces > 0) {
        putchar(' ');
        --cuedSpaces;
      }
      putchar(c);
      cursor = 0;
    } else {
      while (cuedSpaces > 0) {
        putchar(' ');
        --cuedSpaces;
      }
      putchar(c);
    }
    ++cursor;
  }

  return 0;
}