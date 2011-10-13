/*
  Name: 1.10 external variables
  Copyright: 2011
  Author: Yong Bakos
  Date: 10/13/11 10:31AM
  Description: page 32
*/
#include <stdio.h>

#define MAXLENGTH 1000  // maximum input line size

int max;
char line[MAXLENGTH];
char longest[MAXLENGTH];

int getline(void);
void copy(void);

// print longest input line
int main() {
  int len;

  max = 0;

  while ((len = getline()) > 0)
    if (len > max) {
      max = len;
      copy();
    }
  if (max > 0)
    printf("%s", longest);
  return 0;
}

int getline(void) {
  int c, i;

  for (i = 0; (i < MAXLENGTH - 1) && ((c = getchar()) != EOF) && (c != '\n'); ++i)
    line[i] = c;
  if (c == '\n') {
    line[i] = c;
    ++i;
  }
  line[i] = '\0';
  return i;
}

void copy(void) {
  int i;
  i = 0;
  while ((longest[i] = line[i]) != '\0')
    ++i;
}
