#include <math.h>
#include <stdio.h>

#define EPSILON 1e-7

double bisection(int p, int q, double (*func)(int, int, double));
double f(int p, int q, double x);

int main()
{
    int p;
    int q;

    scanf("%d%d", &p, &q);
    printf("%.4f\n", bisection(p, q, f));
    return 0;
}

double bisection(int p, int q, double (*func)(int, int, double))
{
    double a   = -20;
    double b   = 20;
    double mid = (a + b) / 2;

    while (1) {
        if (fabs(func(p, q, mid)) < EPSILON)
            return mid;
        else {
            if (func(p, q, mid) * func(p, q, a) < 0) {
                /* There are zero between a & mid */
                b   = mid;
                mid = (a + b) / 2;
            }
            else {
                a   = mid;
                mid = (a + b) / 2;
            }
        }
    }
}

double f(int p, int q, double x)
{
    return p * x + q;
}