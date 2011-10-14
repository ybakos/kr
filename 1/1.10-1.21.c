/*
  Name: 1.10 1-21
  Copyright: 2011
  Author: Yong Bakos
  Date: 10/14/11 08:02AM
  Description: page 34. This program spaces with tabs.
*/
#include <stdio.h>

#define TAB_WIDTH 8

int getline(char s[], int lim);
void detab(char s[], int width);

int main() {
  int c, numberOfSpaces, position;
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