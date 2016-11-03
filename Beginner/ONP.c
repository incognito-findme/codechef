/* https://www.codechef.com/problems/ONP */
#include <stdio.h>
#include <string.h>

static int stack[400];
static char exp[400];
static int sp =0;
void print(char *exp)
{
	while(*exp) {
		switch(*exp) {
		case '(':
			break;
			
		case '+':
		case '-':
		case '*':
		case '/':
		case '^':
			stack[sp++] =(int)*exp;
			break;
		case ')':
			printf("%c", stack[--sp]);
			break;
		default:
			printf("%c", *exp);
			break;
		}
		exp++;
	}
	printf("\n");
}
int main(void)
{
	int testcase;
	scanf("%d", &testcase);
	while(testcase--) {
	memset(exp, 0, sizeof(exp));
	memset(stack, 0, sizeof(stack));
	sp = 0;
	scanf("%s", exp);
	print(exp);
	}
	return (0);
}
