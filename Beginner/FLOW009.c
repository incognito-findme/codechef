/*
 * https://www.codechef.com/problems/FLOW009
 */
#include <stdio.h>

int main(void)
{
	int testcase, quantity, price;
	float total_price;
	scanf("%d", &testcase);
	while(testcase--) {
		scanf("%d %d", &quantity, &price);
		total_price = (quantity * price);

		/* 10% discount if the quantity more than 1000 */
		if (quantity > 1000)
			total_price -= (total_price * 10 / 100);

		printf("%f\n", total_price);
	}
	return (0);

}
