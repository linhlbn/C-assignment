#include <stdio.h>

int
main () {
  /* my first program in C */
  /* clear the whhole screen */
  printf ("\033[00;00H");
  printf ("\033[1;33m");	//yellow
  printf ("Hello, World!");	//print the yellow sentence
  printf ("\033[00;70H");	//move right
  printf ("\033[1;36m");	//cyan
  printf ("Hello, World!");	//print the cyan sentence
  printf ("\033[55D"), printf ("\033[1;31m");	//red
  printf ("\033[12;35H");	//move to the middle
  printf ("Hello, World!");
  printf ("\033[24;00H");
  printf ("\033[1;32m");	//green
  printf ("Hello, World!");	//print the yellow sentence
  printf ("\033[24;70H");	//move right
  printf ("\033[1;34m");	//blue
  printf ("Hello, World!");	//print the cyan sentence
  getchar ();			// wait the user to press a key to stop
  return 0;
}