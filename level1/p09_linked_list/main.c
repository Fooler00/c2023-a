#include<stdio.h>
#include<stdlib.h>
#include <malloc.h>

typedef struct ListNode ListNode;
struct ListNode {
    int value;
    struct ListNode *next;
};

struct ListNode *creat(int n) {
    struct ListNode *head, *node, *end;
    head = (ListNode *) malloc(sizeof(ListNode));
    end = head;
    for (int i = 0; i < n; i++) {
        node = (ListNode *) malloc(sizeof(ListNode));
        scanf("%d", &node->value);
        end->next = node;
        end = node;
    }
    end->next = NULL;
    return head;
}

struct ListNode *reverseList(struct ListNode *head) {
    struct ListNode *prev = NULL;
    struct ListNode *curr = head;
    while (curr) {
        struct ListNode *next = (*curr).next;
        (*curr).next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

/*ListNode *findNode(ListNode *head, int value) {
    ListNode *current = head;
    while (current != NULL) {
        if (current->value == value) { return current; }
        else current->next = current;
    }
    return NULL;
}*/

int find(ListNode *head, int value, int j) {
    ListNode *current = head;
    for (int t = 0; t < j; t++) {
        current->next = current;
    }
    while (1) {
        if (current != NULL && current->value == value) {current->value=value-1; return j; }
        else return -1;
    }

}

int main() {
    int n;
    scanf("%d", &n);
    struct ListNode *i;
    i = (ListNode *) malloc(sizeof(ListNode));
    i->next = creat(n);
    i->next = reverseList(i->next);
    for (int j = 1; j <= n; j++) {
        printf("%d ", find(i->next,5,j));
        }
    return 0;
}
