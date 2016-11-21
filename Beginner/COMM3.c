/* https://www.codechef.com/problems/COMM3 */
#include <stdio.h>

#define check(x1, y1, x2, y2)			\
	(((x1-x2) * (x1-x2)) +( (y1-y2) * (y1-y2)))
int main(void)
{
	int testcases;
	int x1, y1;
	int x2, y2;
	int x3, y3;
	int r, count;

	scanf("%d", &testcases);
	while(testcases--) {
		count = 0;
		scanf("%d", &r);
		scanf("%d %d", &x1, &y1);
		scanf("%d %d", &x2, &y2);
		scanf("%d %d", &x3, &y3);
		if (check(x1, y1, x2, y2) <= (r *r))
			count++;
		if (check(x2, y2, x3, y3) <= (r *r))
			count++;
		if (check(x1, y1, x3, y3) <= (r *r))
			count++;
		if (count > 1)
			printf("yes\n");
		else
			printf("no\n");

	}
	return (0);
}
