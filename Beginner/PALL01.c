/* https://www.codechef.com/problems/PALL01 */
#include <stdio.h>

int check_palindrome(int n)
{
	int r = 0;

	while(n > 0) {
		r = r + (n % 10);
		n = n / 10;
		if (n)
			r = r * 10;
	}
	return r;
}
int main(void)
{
	int testcase, n, rev_n;

	scanf("%d", &testcase);
	while(testcase--) {
		scanf("%d", &n);
		rev_n = check_palindrome(n);
		if (rev_n == n)
			printf("wins\n");
		else
			printf("losses\n");
	}
	return (0);
}
