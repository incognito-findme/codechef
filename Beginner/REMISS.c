/* https://www.codechef.com/problems/REMISS */
#include <stdio.h>

#define max(a, b)	(a >= b ? a : b)
int main(void)
{
	unsigned long g1, g2;
	int testcase;

	scanf("%d", &testcase);
	while(testcase--) {
		scanf("%lu %lu", &g1, &g2);
		printf("%lu %lu\n", max(g1,g2), (g1 + g2));
	};
	return 0;
}
