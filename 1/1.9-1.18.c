/*
  Name: 1.9 1-18
  Copyright: 2009
  Author: Yong Bakos
  Date: 10/11/11 11:59PM
  Description: page 31
*/
#include <stdio.h>

#define MAXLENGTH 1000

int getline(char s[], int lim);
void cleanse(char line[], int length);

int main() {
  char line[MAXLENGTH];
  int length;

  while (length = getline(line, MAXLENGTH)) {
    cleanse(line, length);
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

void cleanse(char line[], int length) {
  int newlineIndex = 0;
  // Find the end of the line
  while (line[newlineIndex] != '\n' && newlineIndex < length) {
    ++newlineIndex;
  }
  --newlineIndex; // move index to char before \n

  // Find the index of the first non-whitespace character, starting from the end
  while ( newlineIndex >= 0 && (line[newlineIndex] == ' ' || line[newlineIndex] == '\t') ) {
    --newlineIndex;
  }

  // Move the newline character and the terminator to right after the last non-whitespace character.
  line[newlineIndex + 1] = '\n';
  line[newlineIndex + 2] = '\0';
  return;
}