/* https://www.codechef.com/problems/SNAPE */
#include <stdio.h>
#include <math.h>

int main(void)
{
	int testcase;
	float l, b;

	scanf("%d", &testcase);
	while(testcase--) {
		scanf("%f %f", &b, &l);
		if (l > b)
			printf("%f ", sqrt((l*l) - (b*b)));
		else if (b > l)
			printf("%f ", sqrt((b*b) - (l*l)));
		else
			printf("%f ", b);

		printf("%f\n", sqrt((b*b) + (l*l)));
	}
	return (0);
}
