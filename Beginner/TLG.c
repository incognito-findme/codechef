/* https://www.codechef.com/problems/TLG */
#include <stdio.h>

int main(void)
{
	int games = 0;
	int p1 = 0, p2 = 0, p1_lead = 0, p2_lead = 0;
	int t1, t2;
	scanf("%d", &games);
	while (games--) {
		scanf("%d %d", &t1, &t2);
		p1+=t1; p2+=t2;
		if (p1 >= p2)
			p1_lead=((p1 - p2) > p1_lead ? (p1 - p2) : p1_lead);
		else
			p2_lead=((p2 - p1) > p2_lead ? (p2 - p1) : p2_lead);
//		printf("%d %d %d %d\n", p1, p2, p1_lead, p2_lead);
	}
	if (p1_lead >= p2_lead)
		printf("1 %d\n", p1_lead);
	else
		printf("2 %d\n", p2_lead);

	return (0);
}
