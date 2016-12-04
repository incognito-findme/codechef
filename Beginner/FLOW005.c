/* https://www.codechef.com/problems/FLOW005 */
#include <stdio.h>


int notes[] = {100, 50, 10, 5, 2, 1};

int find(int balance)
{
	unsigned long i, count = 0;

	for(i = 0; i< 6; i++) {
		if (balance/notes[i] > 0) {
			count+=balance/notes[i];
			balance%=notes[i];
	}
	}
	printf("%lu\n", count);

	return (0);
}

int main(void)
{
	int testcase;
	unsigned long amount;

	scanf("%d", &testcase);
	while(testcase--) {
		scanf("%lu", &amount);
		find(amount);
	}
	return (0);
}
