#include<stdio.h>

/* print Fahrenheight-Celsius table
   for fahr = 0, 20, .. 300 */

main()
{
  printf("Tables:\n");

  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  printf("  F to C\n");
  fahr = lower;
  while (fahr <= upper) {
    celsius = (5.0/9.0) * (fahr - 32.0);
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
  
  printf("\n  C to F\n");
  celsius = lower;
  while (celsius <= upper) {
    fahr = (celsius * (9.0/5.0)) + 32.0;
    printf("%3.0f %6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
