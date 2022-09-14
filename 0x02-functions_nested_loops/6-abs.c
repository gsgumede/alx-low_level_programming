#include "main.h"

/**
 *_abs - computes absolute value of an integer
 *
 *@n: The integer
 *Return: Absolute value of the integer
 */
int _abs(int n)
{
int abs;/*Declare a variable to hold the absolute value*/
if (n < 0)
{
abs = n * -1;
return (abs);
}
else
{
return (n);
}

}
