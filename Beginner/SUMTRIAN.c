/* https://www.codechef.com/problems/SUMTRIAN */
#include <stdio.h>
#include <string.h>

#define SIZE 100
#define max(a, b) ( a >= b ? a : b)
int main(void)
{
	int a[SIZE][SIZE];
	int maxi = 0;
	int i, j, n, testcase;

	scanf("%d", &testcase);

	while(testcase--) {
		scanf("%d", &n);
		memset(a, 0 , sizeof(a));

		for (i = 0; i<n; i++) {
			for(j = 0; j<=i; j++) {
				scanf("%d", &a[i][j]);
			}
		}

		for (i = 1; i < n ;i++) {
			a[i][0] += a[i-1][0];
		}

		for (i = 1; i < n; i++) {
			for (j = 1; j < n; j++) {
				a[i][j] = max((a[i -1][j] + a[i][j]),
						(a[i - 1][j - 1] + a[i][j]));
			}
		}

		maxi = a[n -1][0];
		for (i = 1; i < n; i++) {
			if (a[n-1][i] > maxi)
				maxi = a[n - 1][i];
		}
		printf("%d\n", maxi);
	}
	return (0);
}
