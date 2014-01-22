/*
 * problem3.c
 * The prime factors of 13195 are 5, 7, 13 and 29.
 * What is the largest prime factor of the number 600851475143 ?
 * 
 * Vinod VM <vinod@segfault.in>
 */
#include <stdio.h>
 
int prime(long n, int i)
{
	while(n % i != 0 && i * i < n)
		i += 1;

	if(i * i < n)
		return prime(n/i, i);
	else
		return n;
}

int main(void)
{
	long n = 600851475143;

	printf("Heigest prime factor for %ld = %d\n", n, prime(n, 2));

	return (0);
}