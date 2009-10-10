/*
  Name: Character Counting
  Copyright: 2009
  Author: Yong Bakos
  Date: 02/10/09 09:31AM
  Description: page 18
*/
#include <stdio.h>

int main() {
  long nc = 0;

  while (getchar() != EOF) ++nc;
   
  printf("%ld\n", nc);

 return 0;
}