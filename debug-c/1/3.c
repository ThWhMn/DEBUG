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
    double a = 20.0;
    double b = -20.0;
    double m;
    while (1) {
        m        = (a + b) / 2;
        double c = f(p, q, m);
        if (fabs(c) < EPSILON) { /*which can make m approach answer*/
            return m;
        } else if (f(p, q, a) * c < 0) { /*0 between a and m*/
            b = m;
        } else { /*0 between b and m*/
            a = m;
        }
    }
}

double f(int p, int q, double x)
{ /*calcalate value*/
    return p * x + q;
}