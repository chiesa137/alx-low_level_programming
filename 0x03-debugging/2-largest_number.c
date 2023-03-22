#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
<<<<<<< HEAD

{

	int largest;

	if (a >= b && a >= c)
	{
	largest = a;
	}
	else if (b >= a && b >= c)
	{
	largest = b;
	}
	else
	{
	largest = c;
	}
	return (largest);
=======
{
 int largest;

 if (a > b && a > c)
 {
 largest = a;
 }
 else if (a > b && c > a)
 {
 largest = c;
 }
 else if (b > c)
 {
 largest = b;
 }
 else
 {
 largest = c;
 }

return (largest);
>>>>>>> 4e764ce023fd2888572ca2cbf83560c26c76e886
}
