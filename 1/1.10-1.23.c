/*
  Name: 1.10 1-23
  Copyright: 2011
  Author: Yong Bakos
  Date: 10/16/11 10:32PM
  Description: page 34.
    Write a program to remove all comments from a C program. 
    Don't forget to handle quoted strings and character 
    constants properly. C comments do not nest.
*/
#include <stdio.h>

int getline(char s[], int lim);

int main() {

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