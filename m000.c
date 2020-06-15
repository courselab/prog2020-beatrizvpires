/* m000.c - Pitagorean name number

   This program takes the a person's full name read as a string from 
   from the standard input and output its Pitagorean Number as shown 
   in reference [1] at the bottom of this source file.

   E.g.

      command line    : John Doe
      expected output : 35

   Directions:

      Please, edit function roman();
      do no not change function main().

 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 255

{
  int n;
  if ( (c >= 'a') && (c<= 'z')) 
  n = (c - 'a') % 9 + 1;
  else
  if ( (c >= 'A') && (c <= 'Z'))
  n = ( c - 'a' + 32) % 9 + 1;
  else
  n=0;
  return n;
  }

/* Write the number 'n' in Roman numerals.*/


int pitagorean (char *s)
{
  int i=0, count=0;
  while (s[i] != 0)
  {
    count = count + np (s[i]);
    i++;
  }

  return count;
}

/* Do not edit function main. */

int main (int argc, char **argv)
{
  int n;
  char name[MAX];

  fgets (name, MAX-1, stdin);
  
  n = pitagorean (name);
  
  printf ("%d\n", n);

  return 0;
}

/*  
    References:

    [1] Pitagorean name number
    https://en.wikipedia.org/wiki/Numerology#Pythagorean_system
*/
