#include<stdio.h>
#include<stdlib.h>
#include <malloc.h>

typedef struct ListNode ListNode;
struct ListNode {
      int value;
      struct ListNode *next;
  };
struct ListNode *creat(int n){
    struct ListNode *head, *node, *end;
    head = (ListNode*)malloc(sizeof(ListNode));
    end = head;
    for (int i = 0; i < n; i++) {
        node = (ListNode *)malloc(sizeof(ListNode ));
        scanf("%d", &node->value);
        end->next = node;
        end = node;
    }
    end->next = NULL;
    return head;
}
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* prev = NULL;
    struct ListNode* curr = head;
    while (curr) {
        struct ListNode* next = (*curr).next;
        (*curr).next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
ListNode *findNode(ListNode * head, int value) {
    ListNode * current = head;
    struct ListNode *i;
    i=(ListNode*)malloc(sizeof(ListNode ));
    (*i).value=1;
    while (current != NULL) {
        if (current->value == value) {
            current->value = value-1;
            return i;
        }
        current = current->next;
        i->value+=1;
    }
    return NULL;
}

int main()
{
    int n;
    struct ListNode *i;
    i=(ListNode*)malloc(sizeof(ListNode ));
    i->next=creat(n);
    i->next=reverseList(i->next);
    for(int j=1;j<=n;j++) {
        if (findNode(i->next, 5) != NULL)printf("%d ", findNode(i->next, 5)->value);
        else printf("-1");
    }
    return 0;
}
