#include <stdio.h>

unsigned long long A[10000];
unsigned long long partition(unsigned long long first, unsigned long long last)
{
	unsigned long long pivot = A[first];
	unsigned long long temp, leftmark, rightmark;

	leftmark = first + 1;
	rightmark = last;

	while (1)
	{
		while (leftmark <= rightmark &&
		       A[leftmark] <= pivot) {
			leftmark++;
		}

		while (A[rightmark] >= pivot &&
			rightmark >= leftmark) {
			rightmark--;
		}

		if (rightmark < leftmark)
			break;

		temp = A[leftmark];
		A[leftmark] = A[rightmark];
		A[rightmark] = temp;
	}

	temp = A[first];
	A[first] = A[rightmark];
	A[rightmark] = temp;

	return rightmark;
}

void qsort(unsigned long long first, unsigned long long last)
{
	unsigned long long split;

	if (first >= last)
		return;
	split = partition(first, last);
	qsort(first, split - 1);
	qsort(split+1, last);

}

int main(void)
{
	unsigned long long i,j;

	scanf("%llu", &i);
	for (j=0; j<i; j++)
		scanf("%llu",&A[j]);
	qsort(0, i-1);

	for (j=0; j<i; j++)
		printf("%llu\n",A[j]);

	return (0);
}
