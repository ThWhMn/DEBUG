#include <stdio.h>
void swap(int *a, int *b){ //swap two numbers
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int n = 10;
    int m;
    int numbers[10];
    int i, j;
    for (i = 0; i < n; i++){
        scanf("%d", &numbers[i]);//input
    }
    for (i = 0; i < n; i++){
        for (j = i + 1; j < n; j++){
            if (numbers[i] < numbers[j]){
                swap(&numbers[i], &numbers[j]);//if the former < latter, swap
            }
        }
    }
    for (int m = 0; m < 10; m++){
        if (m != 9) {
            printf("%d ", numbers[m]); //output
        } else {
            printf("%d", numbers[m]);
        }
    }
    return 0;
}