#include <stdio.h>

// If a is greater than b, swap a & b
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a   = *b;
    *b   = temp;
    return;
}

int main()
{
    int n = 10;
    int numbers[10];
    int i;
    int j;

    for (i = 0; i < n; i++) { // read numbers
        scanf("%d", &numbers[i]);
    }
    for (i = 0; i < n; i++) { // bubble sort
        for (j = n - 1; j > i; j--) {
            if (numbers[j - 1] < numbers[j]) {
                swap(&numbers[j - 1], &numbers[j]);
            }
        }
    }
    for (i = 0; i < n; i++) { // print sorted numbers[]
        printf("%d", numbers[i]);
        if (i != n - 1) {
            printf(" ");
        }
    }
    return 0;
}