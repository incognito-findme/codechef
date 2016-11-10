/* https://www.codechef.com/problems/LUCKFOUR */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *number, *t;
	int testcase, count;

	scanf("%d", &testcase);
	number = malloc(1000001);
	t = number;
	while(testcase--) {
		number = t;
		memset(number, 0, sizeof(number));
		count = 0;
		scanf("%s", number);
		while((number = strstr(number, "4")) != NULL) {
			number++;
			count++;
		}
		printf("%d\n", count);
	};
	free(number);
	return 0;
}
