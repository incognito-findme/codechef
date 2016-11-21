/* https://www.codechef.com/problems/FSQRT */
#include <stdio.h>
#include <math.h>

int main(void)
{
	int testcases, number;
	scanf("%d", &testcases);
	while(testcases--) {
		number = 0;
		scanf("%d", &number);
		printf("%d\n", (int)sqrt((double)number));
		
	}
	return (0);
}
