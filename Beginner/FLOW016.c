/*
 * https://www.codechef.com/problems/FLOW016
 */
#include <stdio.h>
 
int gcd(int a, int b)
{
	/*
	 * Using Euclid's algorithm
	 */
        int numerator, denominator, remainder;
 
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
        int a, b, result;
 
        scanf("%d", &testcase);
        while(testcase--) {
                scanf("%d %d", &a, &b);
                result = gcd(a, b);
                printf("%d %d\n", result, (a * b)/result);
        }
 
        return (0);
}
