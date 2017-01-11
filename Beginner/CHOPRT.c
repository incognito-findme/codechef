/*
 * https://www.codechef.com/problems/CHOPRT
 */
#include <stdio.h>

int main(void)
{
	int testcases, a, b;

	scanf("%d", &testcases);
	while(testcases--) {
		scanf("%d %d", &a, &b);
		if (a > b)
			printf(">\n");
		else if (a < b)
			printf("<\n");
		else
			printf("=\n");
	}
	return (0);
}
