/*
  Name: 1.9 1-17
  Copyright: 2009
  Author: Yong Bakos
  Date: 17/10/09 02:55PM
  Description: page 30
*/
#include <stdio.h>

#define MAXLENGTH 1000  // maximum input line size
#define LONGLINE 80
int getline(char line[], int maxlength);
void copy(char from[], char to[]);

// print longest input line
int main() {
  int length;
  char line[MAXLENGTH];

  while (length = getline(line, MAXLENGTH)) {
      if (length > LONGLINE) {
        printf("%s", line);
      }
  }


  return 0;
}

int getline(char s[], int lim) {
  int c, i;
  for (i = 0; (i < lim - 1) && ((c = getchar()) != EOF) && (c != '\n'); ++i)
    s[i] = c;
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

void copy(char from[], char to[]) {
  int i;
  i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
}