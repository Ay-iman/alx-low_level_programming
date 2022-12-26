#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */



/** 
 *
 *main - recevies no argument
 *
 *
 *
 *
 *Return: Always 0 (succes)
*/

int main(void)

{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	printf("The string Last digit of, \n");
	printf("%d\n", n);
	printf("the string is\n");
	if (n > 5)
	{
		printf(" the string and is greater than 5 \n");
	}
	else if (n == 0)
	{
		printf("the string and is 0 \n");
	}
	else if (n < 6 && n != 0)
	{
		printf(" the string and is less than 6 and not 0\n");
	}

					return (0);

}
