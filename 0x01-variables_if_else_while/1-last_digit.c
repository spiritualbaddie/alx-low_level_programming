#include <stdio.h>
#include <ctype.h>
/**
 * main - Entrypoint
 *
 * Return: Always 0 (success)
 *
 * FUNCTIONALITY *
 *
 * 1. The for loop is used to iterate through the alphabet.
 *
 * 2. The tolower() function is used to convert the letter to lowercase.
 *
 * 3. The putchar() function is used to print the letter.
 *
 * 4. The putchar() function is used to print a new line.
 *
 * Time Complexity: O(n)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n",
			n, n % 10);
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
			n, n % 10);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n",
			n, n % 10);
	}

	return (0);

	}

