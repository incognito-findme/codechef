/* https://www.codechef.com/problems/FLOW001 */
#include <stdio.h>

int main(void) {
	int testcase;
	int a, b;
	scanf("%d", &testcase);
	while(testcase--) {
		scanf("%d %d", &a, &b);
		printf("%d\n", (a + b));
	}
	return (0);
}
