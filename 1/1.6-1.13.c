/*
  Name: 1.6 1-13
  Copyright: 2009
  Author: Yong Bakos
  Date: 04/10/09 09:30AM
  Description: page 24
*/
#include <stdio.h>

#define MAXWORDLENGTH 10

int main() {
  int c, i, j, wordsize;
  int lengths[MAXWORDLENGTH];

  i = j = wordsize = 0;
  for (i = 0; i < MAXWORDLENGTH; ++i) {
    lengths[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      ++lengths[wordsize - 1];
      wordsize = 0;
      continue;
    } else {
      ++wordsize;
    }
  }
  
  for (i = 0; i < MAXWORDLENGTH; ++i) {
    printf("%d| ", i + 1);
    for (j = 0; j < lengths[i]; ++j) {
      printf("x");
    }
    printf("\n");
  }
  
  return 0;
}