/* m008.c - Lastname-Names.

   This program reads the name of a person from the standard input
   in the form 'First-name middle-names last-name' and outputs the 
   name in the form 'LAST-NAME, first-name middle-names'.
   The name should be entered using only ASCII characters (26 letter 
   of latim alphabet, no diacrictics).


   E.g.

      command line    : m008
      standard input  : John Little Bill Doe 
      expected output : DOE, John Little Bill

   Directions:

      Please, edit function lastname();
      do no not change function main().

*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 256

/* Converts the string 's' from first-middle-last name 
   form into LAST-first-middle form. */

void lastname (char *s)
{
	int i, j;
	int numberofspaces, firstletter, firstspace, count, total, state;
	char a[MAX];
	
	numberofspaces = firstletter = j = count = total = 0;
	
	for (i = 0; s[i+1] != 0; ++i)
	++total;
	
	if (s[total-1] == ' ')
	{
		s[total] = 0;
		state = 1;
	}
	
	else
	state = 0;
	
	for (i = 0; s[i+1] != 0; ++i) 
	{
		if (s[i] == ' ')
		++ numberofspaces;
	}
	
	for (i = 0; j < numberofspaces; ++i) 
	{
		if (s[i] == ' ')
		++j;
	}
	
	firstletter = i;
	j = 0;
	
	for (i = 0; j < 1; ++i) 
	{
		if (s[i] == ' ')
		++j;
	}
	
	firstspace = i;
	
	for (i = 0; s[i+1] != 0; ++i) 
	{
		a[i] = s[i+firstletter];
	}
	
	for (i = 0; a[i+1] != 0; ++i)
	++count;
	
	a[ count ] = ','; 
	a[count+1] = ' '; 
	
	
	for (i = 0; i+1 < firstletter; ++i)  
	{
		a[count+2+i] = s[i];
	}
	
	a[count+2+i] = 0;
	
	for (i = 0; i < count; ++i)  
	{
		if (a[i] >= 97)
		a[i] = a[i] - 32;
		
		else
		;
	}
	
	for (i = 0; a[i] != 0; ++i) 
	s[i] = a[i];
	
	if (state == 1)
	{
		s[i] = ' ';
		s[i +1] = 0;
	}
	
	else
	;
	
}



/* Do not edit this function. */

int main (int argc, char **argv)
{
  int n;
  char name[MAX];

  fgets (name, MAX-1, stdin);
  
  lastname (name);

  printf ("%s\n", name);
  
  return 0;
}
