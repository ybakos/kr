/*
  Name: 1.10 1-22
  Copyright: 2011
  Author: Yong Bakos
  Date: 10/16/11 05:17PM
  Description: page 34.
    Write a program to "fold" long input lines into two or more shorter lines after the
    last non-blank character that occurs before the n -th column of input. Make sure 
    your program does something intelligent with very long lines, and if there are no 
    blanks or tabs before the specified column. 
*/
#include <stdio.h>

#define MAX_LENGTH 1000
#define FOLD_WIDTH 30

int getline(char s[], int lim);

int main() {
  int len, cursor, steps, lastSpaceIndex;
  steps = cursor = lastSpaceIndex = 0;
  char line[MAX_LENGTH];
  printf("******************************\n");
  while ((len = getline(line, MAX_LENGTH)) > 0 ) {
    while (cursor < len) {
      while (cursor < len && steps < FOLD_WIDTH) {
        if (line[cursor] == ' ' || line[cursor] == '\t') {
          lastSpaceIndex = cursor;
        }
        ++cursor;
        ++steps;
      }
      if (lastSpaceIndex != 0) line[lastSpaceIndex] = '\n';
      steps = 0;
    }
    printf("%s", line);
    cursor = 0;
    steps = 0;
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