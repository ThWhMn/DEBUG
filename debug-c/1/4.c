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
    if (fabs(f(p, q, mid)) < EPSILON) {
        return mid;
    }
    else if ((f(p, q, a) > 0 && f(p, q, mid) < 0) || /* Decreasing f */
             (f(p, q, a) < 0 && f(p, q, mid) > 0)) { /* Increasing f */
        /* There are zero between a & mid */
        while (fabs(f(p, q, mid)) >= EPSILON) {
            if ((f(p, q, a) > 0 && f(p, q, mid) < 0) ||
                (f(p, q, a) < 0 && f(p, q, mid) > 0)) {
                /* There are zero between a & mid */
                b   = mid;
                mid = (a + b) / 2;
            }
            else if ((f(p, q, mid) > 0 && f(p, q, b) < 0) || /* Decreasing f */
                     (f(p, q, mid) < 0 && f(p, q, b) > 0)) { /* Increasing f */
                /* There are zero between b & mid */
                a   = mid;
                mid = (a + b) / 2;
            }
        }

        return mid;
    }
    else if ((f(p, q, mid) > 0 && f(p, q, b) < 0) || /* Decreasing f */
             (f(p, q, mid) < 0 && f(p, q, b) > 0)) { /* Increasing f */
        /* There are zero between b & mid */
        while (fabs(f(p, q, mid)) >= EPSILON) {
            if ((f(p, q, a) > 0 && f(p, q, mid) < 0) || /* Decreasing f */
                (f(p, q, a) < 0 && f(p, q, mid) > 0)) { /* Increasing f */
                /* There are zero between a & mid */
                b   = mid;
                mid = (a + b) / 2;
            }
            else if ((f(p, q, mid) > 0 && f(p, q, b) < 0) ||
                     (f(p, q, mid) < 0 && f(p, q, b) > 0)) {
                /* There are zero between b & mid */
                a   = mid;
                mid = (a + b) / 2;
            }
        }

        return mid;
    }

    return 0;
}

double f(int p, int q, double x)
{
    return p * x + q;
}