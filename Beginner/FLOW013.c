/* https://www.codechef.com/problems/FLOW013 */
#include <stdio.h>

int main(void)
{
	int testcase, a, b, c;

	scanf("%d", &testcase);
	while(testcase--) {
		scanf("%d %d %d", &a, &b, &c);
		if ((!a) || (!b) || (!c)) {
			printf("NO\n");
			continue;
		}
		if ((a + b + c) == 180)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return (0);
}
