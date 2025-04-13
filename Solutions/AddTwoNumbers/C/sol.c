/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* createNode(int value) {
    struct ListNode* node = calloc(1, sizeof(*node));
    node->val = value;
    return node;
}

struct ListNode* addNode(struct ListNode* rear, int value) {
    struct ListNode* node = createNode(value);
    if (rear == NULL) {
        return node;
    } else {
        rear->next = node;
        return node;
    }

}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* curr1 = l1;
    struct ListNode* curr2 = l2;
    struct ListNode* final_list = NULL;
    struct ListNode* rear = NULL;
    int add = 0;
    int number;
    while (curr1 || curr2) {
        number = 0;
        if (curr1) {
            number += curr1->val;
            curr1 = curr1->next;
        }
        if (curr2) {
            number += curr2->val;
            curr2 = curr2->next;
        }
        number += add;
        rear = addNode(rear, number % 10);

        // memorise first node as the head of list
        if (final_list == NULL) {
            final_list  = rear;
        }

        add = number / 10; // keep in mind for next sum
    }

    if (add > 0) {
        addNode(rear, add);
    }
    return final_list;
}