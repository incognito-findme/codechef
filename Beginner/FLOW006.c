/* https://www.codechef.com/problems/FLOW006 */
#include <stdio.h>

int main(void)
{
	int n, sum = 0;
	int testcase;

	scanf("%d", &testcase);
	while(testcase--) {
		sum =0;
		scanf("%d", &n);

		while(n > 0) {
			sum+=(n%10);
			n/=10;
		}
		printf("%d\n", sum);
	}
	return (0);
}
