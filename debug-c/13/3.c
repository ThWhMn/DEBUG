#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    int          data;
    struct node *next;
} Node;

Node *circle_create(int n);
void  count_off(Node *head, int n, int k, int m);

int main()
{
    int n, k, m;
    scanf("%d%d%d", &n, &k, &m);
    Node *head = circle_create(n);
    count_off(head, n, k, m);
    return 0;
}

Node *circle_create(int n)
{
    Node *temp, *new_node, *head;
    int   i;
    temp       = (Node *)malloc(sizeof(Node));
    head       = temp;
    head->data = 1;
    for (i = 2; i <= n; i++) {
        new_node       = (Node *)malloc(sizeof(Node));
        new_node->data = i;
        temp->next     = new_node;
        temp           = new_node;
    }
    temp->next = head;

    return head;
}

void count_off(Node *head, int n, int k, int m)
{
    int   x, y, i;
    Node *find;
    Node *temp, *pre;
    temp = head;
    pre  = head;
    if (k == 1) {
        for (i = 1; i < n; i++) {
            pre = pre->next;
        }
    } else {
        for (i = 1; i < k - 1; i++) {
            pre = pre->next;
        }
    }
    temp = pre->next;
    for (y = 0; y < n; y++) {
        for (x = 1; x < m; x++) {
            temp = temp->next;
            pre  = pre->next;
        }
        printf("%d", temp->data);
        temp      = temp->next;
        pre->next = pre->next->next;
        if (y != n - 1) {
            printf(" ");
        }
    }
    return;
}