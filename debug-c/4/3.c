#include <math.h>
#include <stdio.h>

void swap(int *a, int *b)
{ // swap two numbers
    int temp;
    temp = *a;
    *a   = *b;
    *b   = temp;
}

int main()
{
    int n = 10;
    int m;
    int numbers[100];
    int i, j;
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]); // input
    }
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (numbers[i] < numbers[j]) { // if the former < latter, swap
                swap(&numbers[i], &numbers[j]);
            }
        }
    }

    for (m = 0; m < 10; m++) {
        printf("%d", numbers[m]); // output
        if (m != 9) {
            printf(" ");
        }
    }
    return 0;
}
