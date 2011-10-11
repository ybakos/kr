/*
  Name: 1.9 1-17
  Copyright: 2011
  Author: Yong Bakos
  Date: 10/11/11 12:37PM
  Description: page 31
*/
#include <stdio.h>

#define MAXLENGTH 1000

int getline(char s[], int lim);
void reverse(char s[]);

int main() {
  char line[MAXLENGTH];

  while (getline(line, MAXLENGTH) > 0) {
    reverse(line);
    printf("%s", line);
  }
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

void reverse(char s[]) {
  int r = 0;
  int l = 0;
  char tmp;
  while (s[r] != '\n') {
    ++r;
  }
  --r;
  while(l < r) {
    tmp = s[r];
    s[r] = s[l];
    s[l] = tmp;
    ++l;
    --r;
  }

}