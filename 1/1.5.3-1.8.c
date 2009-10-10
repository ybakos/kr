/*
  Name: 1.5.3 1.8
  Copyright: 2009
  Author: Yong Bakos
  Date: 03/10/09 10:00AM
  Description: page 20
*/
#include <stdio.h>

int main() {
  int c, lines, spaces, tabs;
  lines = spaces = tabs = 0;
  while ((c = getchar()) != EOF) {
    if (c == '\n') ++lines;
    if (c == '\t') ++tabs;
    if (c == ' ') ++spaces;
  }
  printf("%d newlines\n", lines);
  printf("%d spaces\n", spaces);
  printf("%d tabs\n", tabs);
  return 0;
}