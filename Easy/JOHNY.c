/*
 * https://www.codechef.com/problems/JOHNY
 */
#include <stdio.h>

int main(void)
{
	int testcases;
	unsigned long a[101];
	int  n_songs,k,  j = 0, n_pos;
	unsigned long i;

	scanf("%d", &testcases);
	while(testcases--) {
		scanf("%d", &n_songs);
		for (k = 1; k <= n_songs; k++) {
			scanf("%lu", &i);
			a[k] = i;
		}
		scanf("%d", &n_pos);
		for (j = 1, k = 1; k <= n_songs; k++) {
			if (a[k] < a[n_pos])
				j++;
		}
		printf("%d\n", j);
	}
	return (0);
}
