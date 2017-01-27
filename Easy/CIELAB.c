#include <stdio.h>

int main(void)
{
	int a, b, result;

	scanf("%d %d", &a, &b);
	result = (a - b);
	if ((result % 10) != 9)
		printf("%d\n", ++result);
	else
		printf("%d\n", --result);
	return (0);
}
