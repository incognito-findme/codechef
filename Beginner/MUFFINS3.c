/* https://www.codechef.com/problems/MUFFINS3 */
#include <stdio.h>

int main(void)
{
	int testcase;
	unsigned long cupcakes;
	unsigned long result;

	scanf("%d", &testcase);
	while(testcase--) {
		scanf("%lu", &cupcakes);
		result = (cupcakes) - (cupcakes % ((cupcakes / 2UL) + 1));
		printf("%lu\n", result);
	}
	return (0);
}
