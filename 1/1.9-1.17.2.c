/*
  Name: 1.9 1-17
  Copyright: 2010
  Author: Take from the C answers site. Does this satisfy the requirements? Hmmm...
  Date: 17/10/09 02:55PM
  Description: page 30
*/
#include <stdio.h>

#define MINLENGTH 10  // maximum input line size

int readbuff(char *buffer) {
  size_t i = 0;
  int c;
  while (i < MINLENGTH) {
    c = getchar();
    if (c == EOF) return -1;
    if (c == '\n') return 0;
    buffer[i++] = c;
  }
  return 1;
}

int copyline(char *buffer) {
  size_t i;
  int c;
  int status = 1;
  for (i = 0; i < MINLENGTH; i++) {
    putchar(buffer[i]);
  }
  while (status == 1) {
    c = getchar();
    if (c == EOF)
      status = -1;
    else if (c == '\n')
      status = 0;
    else
      putchar(c);
  }
  putchar('\n');
  return status;
}

int main() {
  char buffer[MINLENGTH];
  int status = 0;
  while (status != -1) {
    status = readbuff(buffer);
    if (status == 1)
      status = copyline(buffer);
  }
  return 0;
}
