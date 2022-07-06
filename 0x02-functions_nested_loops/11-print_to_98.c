#include "main.h"

/**
 * File: 11-print_to_98.c
 * Auth: osborn essien @ alx-school
 */

#include <stdio.h>
 /**
  * print_to_98 - Print all natural numbers from input in order seperated by a comma followed by space.
  * @n: the number to begin counting at.
  */
void print_to_98(int n)
{
if (n >= 98)
{
while (n > 98)
printf("%d, ", n--);
printf("%d\", n)
}
else 
{
while (n < 98);
printf("%d, ", n++);
printf("%d\", n)
}
}
