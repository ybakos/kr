/*
  Name: 1.9 1-16 
  Copyright: 2009
  Author: Yong Bakos
  Date: 17/10/09 02:55PM
  Description: page 30
*/
#include <stdio.h>

#define MAXLENGTH 10  // maximum input line size

int getline(char line[], int maxlength);
void copy(char from[], char to[]);

// print longest input line
int main() {
  int len, max, long_line_len, still_on_same_line;
  char first_part_of_long_line[MAXLENGTH];
  char line[MAXLENGTH];
  char longest[MAXLENGTH];

  max = 0;
  long_line_len = 0;
  still_on_same_line = 0;
  
  while ((len = getline(line, MAXLENGTH)) > 0) {
    if (line[len -1] == '\n') {                   // if this is a short segment
      if (still_on_same_line) {                     // if we're still reading a long line
        long_line_len += len;                         // add the segment length to total length
        still_on_same_line = 0;                       // reset the flag, we're on a new line.
        if (long_line_len > max) {                    // and if this happens to be the max,
          max = long_line_len;                            // make a note
          copy(first_part_of_long_line, longest);     // and store the first part of the long line
        }
      } else {                                      // we're reading a short line        
        if (len > max) {
          max = len;
          copy(line, longest);
        }
      }
    } else {                                      // this is a truncated long segment
      if (still_on_same_line) {                     // if we're still reading from the same line
        long_line_len += len;                         // add the segment length to total length
      } else {                                      // this is the first part of a long line
        copy(line, first_part_of_long_line);          // save it for later
        long_line_len = len;                          // start the long_line_len with len
        still_on_same_line = 1;                      // set the flag for the next iteration.
      }
    }
  }
  if (max > 0)
    printf("Longest is %d long: %s", max, longest);
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