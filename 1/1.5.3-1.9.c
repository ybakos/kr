/*
  Name: 1.5.3 1.9
  Copyright: 2009
  Author: Yong Bakos
  Date: 03/10/09 10:06AM
  Description: page 20
*/
#include <stdio.h>

int main() {
  int c;
  int last_c_was_space;
  last_c_was_space = 0;
  while ((c = getchar()) != EOF) {
    if (c == ' ' && last_c_was_space) {
      continue;
    } else if (c == ' ') {
      last_c_was_space = 1;
    } else {
      last_c_was_space = 0;
    }
    putchar(c);
  }
  return 0;
}