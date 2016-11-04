/* https://www.codechef.com/problems/RECIPE */
#include <stdio.h>
#include <limits.h>

int main(void)
{
	int ingre_list[50];
	int ingredient;
	int testcases;
	int min = 0;
	int i, j;
	int gcd;

	scanf("%d", &testcases);
	while(testcases--) {
		scanf("%d", &ingredient);
		for (i= 0; i< ingredient; i++) {
			scanf("%d", &ingre_list[i]);
			if (ingre_list[i] > min)
				min  = ingre_list[i];
		}		

		gcd = 0;	
		for (j = 1; j <= min; j++) {
			for (i = 0; i < ingredient; i++) {
				if (ingre_list[i]%j)
					break;
			}
			if (i == ingredient)
				gcd = j;
		}
		for (i = 0; i < ingredient; i++) {
			printf("%d ", ingre_list[i]/gcd);
		}
		printf("\n");
	}

	return (0);
}
