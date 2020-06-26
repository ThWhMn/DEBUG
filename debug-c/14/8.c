#include <stdio.h>

int main()
{
    int shuru, geshu, hangshu, shuru2;

    scanf("%d", &shuru);
    shuru2 = shuru;

    for (hangshu = 1; hangshu <= shuru; hangshu++) {
        shuru2 = shuru - hangshu + 1;
        for (geshu = 1; geshu <= shuru - hangshu + 1; geshu++) {
            printf("%d", shuru2);
            if (shuru2 > 1) {
                printf(" ");
            }
            if (shuru2 == 1 && hangshu != shuru) {
                printf("\n");
                break;
            }
            shuru2--;
        }
    }
    return 0;
}