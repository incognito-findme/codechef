/* https://www.codechef.com/problems/FLOW002 */
#include <stdio.h>

int main(void)
{
	unsigned long a, b;
	int testcase;

	scanf("%d", &testcase);
	while(testcase--) {
		scanf("%lu %lu", &a, &b);
		printf("%lu\n", (a % b));
	};
	return 0;
}
