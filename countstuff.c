#include <stdio.h>

/* count newlines, blanks, and tabs as input  */

main()
{
  int c, nl, b, t;

  nl = 0; b = 0; t = 0;
  
  while ((c = getchar()) != EOF) {
    if (c == '\n')
      ++nl;
    if (c == ' ')
      ++b;
    if (c == '\t')
      ++t;
  }	 
  printf("Newlines:%d\nSpace:%d\nTabs:%d\n", nl, b, t);
}
