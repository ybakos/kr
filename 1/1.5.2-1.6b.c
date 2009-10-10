/*
  Name: Character Counting
  Copyright: 2009
  Author: Yong Bakos
  Date: 02/10/09 09:31AM
  Description: page 18
*/
#include <stdio.h>

int main() {
  double nc = 0;

  for (nc = 0; getchar() != EOF; ++nc)
    ;
  printf("%.0f\n", nc);

 return 0;
}