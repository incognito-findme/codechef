/* https://www.codechef.com/problems/TSORT */
#include <stdio.h>

unsigned long long A[1000000] = {0,};
unsigned long long C[1000000] = {0,};
unsigned long long R[1000000] = {0,};

int main(void)
{
	unsigned long long i,j, max = 0;

	scanf("%llu", &i);
	for (j=1; j<=i; j++) {
		scanf("%llu",&A[j]);
		max = (max < A[j] ? A[j] : max);
	}

	for (j = 1; j <= max; j++) { C[A[j]] = C[A[j]]+1; }

//	for(j = 0; j < i; j++){ printf ("%llu ", A[j]); }
//	printf("\n");

//	for(j = 0; j <=max; j++){ printf ("%llu ", C[j]); }
//	printf("\n");

	for (j = 2; j <= max; j++) {
		C[j] = C[j] + C[j -1 ];
	}
//	for(j = 0; j <=max; j++){ printf ("%llu ", C[j]); }
//	printf("\n");

	for(j =1; j <= i; j++) {
		R[C[A[j]]] = A[j];
		C[A[j]] = C[A[j]] - 1;
	}
	for(j = 1; j <= i; j++){ printf ("%llu ", R[j]); }
	printf("\n");
	return (0);
}
