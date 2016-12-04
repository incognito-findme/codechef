/* https://www.codechef.com/problems/HEADBOB */
#include <stdio.h>
#include <string.h>

int main(void)
{
	int testcase, n;
	char s[1001];

	scanf("%d", &testcase);
	while(testcase--) {
		memset(s, '\0', sizeof(1000));
		scanf("%d", &n);
		scanf("%s", s);
		if (strstr(s, "I") != NULL)
			printf("INDIAN\n");
		else if (strstr(s,"Y") != NULL)
			printf("NOT INDIAN\n");
		else
			printf("NOT SURE\n");
	}
	return (0);
}
