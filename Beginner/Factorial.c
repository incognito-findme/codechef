/* https://www.codechef.com/problems/FCTRL */
#include <stdio.h>

void z(int n) {
	int five, mfive = 25;
	int total = 0;

	five = (n/5);
	while (mfive <= n) {
		total+=(n/mfive);
		mfive*=5;
	}
	total+=five;
	printf("%d\n", total);
}
int main(void)
{
	int t, i, n;

	scanf("%d", &t);
	for (i = 0; i< t; i++) {
		scanf("%d", &n);
		z(n);
	}
	return (0);
}
