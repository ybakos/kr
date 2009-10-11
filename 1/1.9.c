/*
  Name: 1.9 character arrays
  Copyright: 2009
  Author: Yong Bakos
  Date: 11/10/09 12:32PM
  Description: page 29
*/
#include <stdio.h>

#define MAXLENGTH 1000  // maximum input line size

int getline(char line[], int maxlength);
void copy(char from[], char to[]);

// print longest input line
int main() {
  int len, max;
  char line[MAXLENGTH];
  char longest[MAXLENGTH];

  max = 0;

  while ((len = getline(line, MAXLENGTH)) > 0)
    if (len > max) {
      max = len;
      copy(line, longest);
    }
  if (max > 0)
    printf("%s", longest);
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
