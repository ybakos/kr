/*
  Name: 1.6 1-14
  Copyright: 2009
  Author: Yong Bakos
  Date: 04/10/09 09:45AM
  Description: page 24
*/
#include <stdio.h>

#define MAXCHAR 256

int main() {
  int c, i, j;
  int lengths[MAXCHAR];
  
  i = j = 0;
  for (i = 0; i < MAXCHAR; ++i) {
    lengths[i] = 0;
  }
  
  while ((c = getchar()) != EOF) {
    ++lengths[c];
  }
  
  for (i = 0; i < MAXCHAR; ++i) {
    if (lengths[i] == 0) continue;
    else {
      printf("%3d: ", i);
      for (j = 0; j < lengths[i]; j++) {
        printf("*");
      }
      printf("\n");
    }
  }
 
  return 0;
}