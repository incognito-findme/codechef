/* https://www.codechef.com/problems/CIELRCPT */
#include <stdio.h>
#include <math.h>

int main(void)
{
	int count = 0;
	int change;
	int i;
	int testcase;

	scanf("%d", &testcase);

	while(testcase--) {

		scanf("%d", &change);
		for (count = 0, i = 1; pow(2, i) <= change && i <= 11; i++);
		i--;
		while(1) {
			if (change - pow(2, i) < 0)
				i--;
			else {
				change-=pow(2, i);
				count++;
			}
			if (change <= 0)
				break;

		}
		printf("%d\n", count);
	}
	return (0);
}
