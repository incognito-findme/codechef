/*
 * https://www.codechef.com/problems/FLOW016
 */
#include <stdio.h>
 
unsigned long gcd(unsigned long a, unsigned long b)
{
	/*
	 * Using Euclid's algorithm
	 */
        unsigned long numerator, denominator, remainder;
 
        numerator = (a >= b) ? a : b;
        denominator = (a + b) - numerator;
 
        remainder = (numerator % denominator);
 
        while (remainder != 0) {
                numerator = denominator;
                denominator = remainder;
                remainder = (numerator % denominator);
        }
 
        return denominator;
}
 
int main(void)
{
        int testcase;
        unsigned long a, b, result;
 
        scanf("%d", &testcase);
        while(testcase--) {
                scanf("%lu %lu", &a, &b);
                result = gcd(a, b);
                printf("%lu %lu\n", result, (a * b)/result);
        }
 
        return (0);
}
