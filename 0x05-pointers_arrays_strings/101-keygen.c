#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random valid passwords
 * Return: 0 (on success)
 *
 */
int main(void)
{
	int pass, sum;

	srand((unsigned int) time(&t));
	sum = 0;
	while (sum <= 2772)
	{
		pass = (rand() % 128);
			sum += pass;
			printf("%c", pass);
	}
	printf("%c", 2772 - sum);

	return (0);
}
