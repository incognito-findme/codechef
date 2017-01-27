/*
 * https://www.codechef.com/problems/CLEANUP
 */
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int testcases;
	int n_jobs, completed, temp, i;
	int *jobs, flip = 2;

	scanf("%d", &testcases);
	while(testcases--) {
		scanf("%d %d", &n_jobs, &completed);
		jobs = calloc(1, sizeof(int) * n_jobs + 1);
		for (i = 0; i < completed; i++) {
			scanf("%d", &temp);
			jobs[temp] = 1;
		}
		flip = 2;
		for (i = 1; i <= n_jobs; i++) {
			if (jobs[i] == 0) {
				jobs[i] = flip;
				if (flip == 2) {
					flip = 3;
				} else {
					flip = 2;
				}
			}
		}
		for (i = 1; i <= n_jobs; i++) {
			if (jobs[i] == 2)
				printf("%d ", i);
		}
		printf("\n");
		for (i = 1; i <= n_jobs; i++) {
			if (jobs[i] == 3)
				printf("%d ", i);
		}
		printf("\n");
		free(jobs);
	}
	return (0);
}
