/*
  Variables and Calculations.c
  
  Add two integer values together and display the result.
  
  http://learn.parallax.com/propeller-c-start-simple/variables-and-math
*/

#include "simpletools.h"                      // Include simpletools

int main()                                    // main function
{
  pause(1000);                                // Wait 1 s for host computer
  int a = 25;                                 // Initialize a variable to 25
  int b = 17;                                 // Initialize b variable to 17
  int c = a + b;                              // Initialize c variable to a + b
  printf("c = %d\n ", c);                     // Display decimal value of c
}
