#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x1;
    float *px1;

    x1 = 15.15;
    px1 = &x1;

    printf("\nzmienna x1 = %.2f",x1);
    printf("\nzmienna x1 = %.2f",*px1);

    getche();
        return 0;
}
