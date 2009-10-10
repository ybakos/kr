/*
  Name: File Copying
  Copyright: 2009
  Author: Yong Bakos
  Date: 02/10/09 08:55AM
  Description: page 16
*/
#include <stdio.h>

int main() {
  int c;

  while ((c = getchar()) != EOF) {
    putchar(c);
  }

  return 0;
}