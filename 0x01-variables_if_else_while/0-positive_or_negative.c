#include <stdlib.h>
#include  <stdio.h>
#include <time.h>

/* more headers goes there */



/* betty style doc for function main goes there */

int main(void) /* this is the main function */

{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	if (n > 0)
{
		printf("98 is positive\n");
}
	else if (n == 0)
{
	printf("0 is zero\n");
}
	else if (n < 0)
{
		printf("-98 is negative\n");
}
	return (0);
}
