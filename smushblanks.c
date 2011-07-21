#include <stdio.h>

/* Replaces strings of blanks with one blank  */

main()
{
  int c, b;

  while ((c = getchar()) != EOF) { 
    if (c != ' ') {
      putchar(c); 
      b = 0;}
    else if (b == 0){ 
      putchar(c);
      b = 1;}
  }
}
