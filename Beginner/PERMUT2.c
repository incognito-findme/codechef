/* https://www.codechef.com/status/PERMUT2 */
#include <stdio.h>
#include <string.h>


#define SIZE 100001
int main(void)
{
	int a[SIZE];
	int b[SIZE];
	int i, k, n;

	while (1) {
		memset(a, 0, sizeof(a));
		scanf("%d", &n);
		if (!n)
			break;
		for (i = 1; i<=n; i++) {
			scanf("%d", &k);
			a[k]= i;
			b[i] = k;
		}

		for (i = 1; i<=n; i++) {
			if (a[i] == b[i])
				continue;
			break;
		}
		if (i >= n)
			printf("ambiguous\n");
		else	
			printf("not ambiguous\n");
	}
	return (0);
}
