#include <stdio.h>

long long int fun(int n) // calculate
{
    if (n == 0 || n == 1) {
        return 0;
    } else if (n == 2 || n == 3) {
        return 1;
    } else {
        return fun(n - 2) + fun(n - 3);
    }
}

int main()
{
    int n;
    scanf("%d", &n);      // input
    printf("%d", fun(n)); // output
    return 0;
}