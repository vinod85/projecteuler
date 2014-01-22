/*
 * problem4.c
 *
 * A palindromic number reads the same both ways. 
 * The largest palindrome made from the product of two 2-digit numbers is 9009 = 91  99.
 *
 * Find the largest palindrome made from the product of two 3-digit numbers.
 *
 * Vinod VM <vinod@segfault.in>
 */
#include <stdio.h>
#include <math.h>

int reverse_int(int n)
{
   int reverse = 0;
 
   while (n != 0)
   {
      reverse = reverse * 10;
      reverse = reverse + n % 10;
      n = n / 10;
   }
 
   return reverse;
}

int main(void)
{
   int i, j, product, large;

   for(i = 999; i >= 100; i--) {
      for(j = 999; j >= 100; j--) {
         product = i * j;
         if(product == reverse_int(product)) {
            large = product > large ? product : large;
         }
      }
   }

   printf("Largest palindrome product: %d\n", large);

   return 0;
}