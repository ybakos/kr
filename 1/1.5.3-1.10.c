/*
  Name: 1.5.3 1.10
  Copyright: 2009
  Author: Yong Bakos
  Date: 03/10/09 10:20AM
  Description: page 20
*/
#include <stdio.h>

int main() {
  int c;
  while ((c = getchar()) != EOF) {
    if (c == '\t') {
      putchar('\\');
      putchar('t');
    } else if (c == '\b') {
      putchar('\\');
      putchar('b');
    } else if (c == '\\') {
      putchar('\\');
      putchar('\\');
    } else putchar(c);
  }
  return 0;
}