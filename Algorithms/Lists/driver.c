#include "ListNode.h"
#include <stdio.h>
int getElement(struct ListNode*, int);

int main(){ /*TODO: cl args to take in list and index */
        struct ListNode* head, *no_head;
        struct ListNode node1, node2,node3,node4;
        node1.val = 1;
        node1.next = &node2;
        node2.val = 2;
        node2.next = &node3;
        node3.val = 3;
        node3.next = &node4;
        node4.val = 4;
        node4.next = NULL;

        head = &node1;
        printf("\n%d\n", getElement(head, 1));
        printf("\n%d\n", getElement(no_head, 1));

        
        return 0;
}