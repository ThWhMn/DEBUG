#include <stdio.h>
#include <math.h>
#define EPSILON 1e-7

double bisection(int p, int q, double (*func)(int, int, double)); 
double f(int p, int q, double x);
int main() {
    int p;
    int q;
    scanf("%d%d", &p, &q);
    printf("%.4f\n", bisection(p, q, f));
    getchar();
    getchar();
    return 0;
}

double bisection(int p, int q, double (*func)(int, int, double)) {
    double a = -20;
    double b = 20;
    double xp;
    xp = (a + b) / 2;
    double c = func(p, q , xp);
        while(fabs(c) >= EPSILON)/*which can make xp approach answer*/{
            if((c * func(p, q , a)) > 0)/*0 between xp and b*/{
                a = xp;
                b = b;
                xp = (a + b) / 2;
                c = func(p, q , xp);
            } else/*0 between xp and a*/{
                a = a;
                b = xp;
                xp = (a + b) / 2;
                c = func(p, q , xp);
            }
        }
    return xp;
}

double f(int p, int q, double x) { /*calcalate value*/
    return p * x + q;
}