/* https://www.codechef.com/problems/HS08TEST */
#include <stdio.h>

int ccheck(float x)
{
        if (x < 0 || x > 2000)
                return 0;
        return 1;
}

int main(void)
{
        float balance;
        int withdrawing;
        scanf("%d %f", &withdrawing, &balance);
        if (!ccheck((float)withdrawing) || !ccheck((float)balance)) {
                return (1);
        }
        if ((withdrawing - 5 * (int)(withdrawing /5)) != 0) {
                printf("%.2f\n",balance);
                return (0);
        }

        if ((float)(withdrawing + 0.5) > balance) {
                printf("%.2f\n", balance);
                return (0);
        }
        printf("%.2f\n", (balance - withdrawing - 0.5));

        return (0);
}
