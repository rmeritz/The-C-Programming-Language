#include <stdio.h>

/* Replaces backslash with \\
            tab with \t
            backspace by \b

Why don't I work? */


main()
{
  int c;

  while ((c = getchar()) != EOF) { 
    if (c != '\\' || c != '\t' || c != '\b') 
      putchar(c);
    else if (c ==  '\\'){ 
      putchar('\\');
      putchar('\\');}gs

    else if (c == '\b'){ 
      putchar('\\');
      putchar('b');}
    else if (c == '\t'){ 
      putchar('\\');
      putchar('t');}
  }
}
