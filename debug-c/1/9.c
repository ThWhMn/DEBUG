#include <math.h>
#include <stdio.h>
#define EPSILON 1e-7

double bisection(int p, int q, double (*func)(int, int, double));
double f(int p, int q, double x);
int    main()
{
    int p;
    int q;
    scanf("%d%d", &p, &q);
    printf("%.4f\n", bisection(p, q, f));
    return 0;
}

double bisection(int p, int q, double (*func)(int, int, double))
{
    double a = -20;
    double b = 20;
    // double c;
    // c = (a + b) / 2;
    while (fabs(f(p, q, (a + b) / 2)) >= EPSILON) {  /*which can make
                                              (a+b)/2 approach answer*/
        if (f(p, q, a) * f(p, q, (a + b) / 2) > 0) { /*0 between b and (a+b)/2*/
            a = (a + b) / 2;
        } else { /*0 between a and (a+b)/2*/
            b = (a + b) / 2;
        }
        // c = (a + b) / 2.0;
    }
    return (a + b) / 2;
}

double f(int p, int q, double x)
{ /*0 between b and c*/
    return p * x + q;
}
