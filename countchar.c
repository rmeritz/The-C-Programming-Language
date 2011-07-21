#include <stdio.h>

/* count chars in input 

How do I make this do anything? How do I give an EOF 
and still have it printf?*/


/*
main()
{
  long nc;

  nc = 0;
  while (getchar() != EOF)
    ++nc;
  printf("%ld\n", nc);
}
*/

main()
{
  double nc;

  for (nc = 0; getchar() != EOF; ++nc)
    ;
  printf("%.0f\n", nc);
}
