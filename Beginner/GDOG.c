/* https://www.codechef.com/problems/GDOG */
#include <stdio.h>

int main(void)
{
	int testcase, n, k;
	int max;

	scanf("%d", &testcase);
	while(testcase--) {
		max = 0;
		scanf("%d %d", &n, &k);
		while(k > 0) {
			if ((n%k) > max)
				max = (n%k);
			k--;
		}
		printf("%d\n", max);
	}
	return (0);
}
