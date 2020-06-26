#include <stdio.h>

#define PI 3.14159

int main()
{
    double r;

    scanf("%lf", &r);
    printf("%.3lf\n", PI * r * 2);
    printf("%.3lf", PI * r * r);

    return 0;
}
