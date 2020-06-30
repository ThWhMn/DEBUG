#include <stdio.h>

void add(char);
void delete1(char);

int rwx = 0;

int main()
{
    // initiation
    char temp;
    scanf("%c", &temp);
    if (temp == 'x') {
        rwx ^= (1 << 0);
    } else if (temp == 'w') {
        rwx ^= (1 << 1);
        scanf("%c", &temp);
        if (temp == 'x') {
            rwx ^= (1 << 0);
        }
    } else if (temp == 'r') {
        rwx ^= (1 << 2);
        scanf("%c", &temp);
        if (temp == 'w') {
            rwx ^= (1 << 1);
        }
        scanf("%c", &temp);
        if (temp == 'x') {
            rwx ^= (1 << 0);
        }
    }
    // modification
    while (scanf("%c", &temp) != EOF) {
        if (temp == '+') {
            scanf("%c", &temp);
            add(temp);
            scanf("%c", &temp);
        } else {
            scanf("%c", &temp);
            delete1(temp);
            scanf("%c", &temp);
        }
    }
    // output
    printf("%d", rwx);
    return 0;
}
void add(char input)
{
    if (input == 'r') {
        rwx ^= (1 << 2);
    } else if (input == 'w') {
        rwx ^= (1 << 1);
    } else if (input == 'x') {
        rwx ^= (1 << 0);
    }
}
void delete1(char input)
{
    if (input == 'r') {
        rwx ^= (1 << 2);
    } else if (input == 'w') {
        rwx ^= (1 << 1);
    } else if (input == 'x') {
        rwx ^= (1 << 0);
    }
}
