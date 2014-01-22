/*
 * problem5.c
 *
 * 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
 * What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
 *
 * Vinod VM <vinod@segfault.in>
 */
#include <stdio.h>

int main(void)
{
	int i, n = 0;

	while(i != 10) {
		n++;
		for(i = 20; i >= 11; i--) {
			if(n % i != 0)
				break;
		}
	}

	printf("Number = %d\n", n);

	return (0);
}