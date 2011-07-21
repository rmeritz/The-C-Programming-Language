#include <stdio.h>

/* copy input to output */

main()
{
  int c;
  
  if((EOF != 0) == (EOF != 1)) {
    printf("EOF is not 1 or 0\n");
    printf("%d", EOF);
  }

  while ((c = getchar()) != EOF) {
    putchar(c);
  }
}
