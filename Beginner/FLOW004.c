/* https://www.codechef.com/problems/FLOW004 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *digit = malloc(1000000+1);
	int testcase;
	char first;
	char *t = digit;

	scanf("%d", &testcase);
	while(testcase--) {
		memset(digit, 0, sizeof(1000001));
		scanf("%s", digit);
		first = (char)*digit;
		digit+=strlen(digit) - 1;
		printf("%d\n", (first - '0') + (*digit - '0') );
	};
	free(t);
	return (0);
}
