#include <stdio.h>
#include "main.h"


int main()
{
   double a = 0.0, b = 0.0, c = 0.0;
   double firstRoot = 0.0, secondRoot = 0.0;

   printf("Enter 3 coefficients such as a, b, c to solve quadratic equation:\n"); 

   makeDataEntryCorrect(&a, &b, &c);
   solveEquation(a, b, c, &firstRoot, &secondRoot);
   
   //unitTests();

   return 0;
}

