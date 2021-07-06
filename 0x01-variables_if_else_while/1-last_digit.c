#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * last_no - last digit of the n number
 * Description: Get a random number and check its last digit, compare it with 5
 * Return: 0
 */
int main(void)
{
	int n, last_no;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_no = n % 10;
	if (last_no > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, last_no);
	else if (last_no == 0)
		printf("Last digit of %i is %i and is 0\n", n, last_no);
	else if (last_no < 6 && last_no != 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, last_no);

	return (0);
}
