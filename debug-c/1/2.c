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
    printf("%.4f", bisection(p, q, f));

    return 0;
}

double bisection(int p, int q, double (*func)(int, int, double))
{
    double a = -20.0, b = 20.0;
    double mid;

    while (1) {
        mid = (a + b) / 2;
        if (fabs(f(p, q, mid)) < EPSILON) {
            return mid;
        }
        else if (f(p, q, a) * f(p, q, mid) < 0) {
            /* There are zero between a & mid */
            b = mid;
        }
        else {
            a = mid;
        }
    }
}

double f(int p, int q, double x)
{
    return p * x + q;
}