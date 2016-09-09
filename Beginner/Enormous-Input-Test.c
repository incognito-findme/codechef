/* https://www.codechef.com/problems/INTEST */
#include <stdio.h>

int main(void)
{
	int n, k, count = 0;
	unsigned long number;

	scanf("%d %d", &n, &k);

	while(n--) {
		scanf("%lu", &number);
		if ((number % k) == 0)
			count++;
	};
	printf("%d\n", count);

	return (0);
}
