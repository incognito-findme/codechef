/* https://www.codechef.com/problems/FCTRL2 */
#include<stdio.h>

long long int fact(long long int n)
{
	if (n >= 1)
		return n*fact(n-1);
	else
		return 1;	
}

void array(int n)
{
	int a[200];
	int i,j, m, x, temp;
	m=1;
	temp=0;
	a[0] =1;

	for (i=1; i<=n; i++) {
		for (j=0; j<m; j++) {
			x = a[j] * i + temp;
			a[j] = x%10;
			temp = x/10;
		}
		while (temp > 0) {
			a[m] = temp%10;
			temp = temp/10;
			m++;
		}
	}
	for (i= m-1; i >=0; i--)
		printf("%d", a[i]);
	printf("\n");
}

int main(void)
{
	long long int n;
	int i;

	scanf("%d\n", &i);
	while(i--) {
		scanf("%lld", &n);
		if (!n)
			printf("1\n");
		if (n <= 20)
			printf("%lld\n", fact(n));
		else
			array(n);
	}
	return (0);
}
