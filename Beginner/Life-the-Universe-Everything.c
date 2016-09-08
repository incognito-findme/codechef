/* https://www.codechef.com/problems/TEST */
#include <stdio.h>

int main(void)
{
        int number;
        while(1) {
                scanf("%d", &number);
                if (number == 42)
                        return (0);
                printf("%d\n", number);
        };
        return (0);
}
