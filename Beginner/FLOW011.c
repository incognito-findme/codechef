/*
 * https://www.codechef.com/problems/FLOW011
 */
#include <stdio.h>

int main(void)
{
	int testcase, basic_pay;

	scanf("%d", &testcase);
	while(testcase--) {
		scanf("%d", &basic_pay);
		if (basic_pay >= 1500)
			printf("%g\n", (double)(basic_pay * 1.98) + 500);
		else
			printf("%g\n", (double)(basic_pay * 2));
	}
	return (0);
}
