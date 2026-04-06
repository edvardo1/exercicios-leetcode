// https://leetcode.com/problems/add-two-numbers/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int carry = 0;
    int digit = 0;
    struct ListNode *first = NULL, *last = NULL;

    while ( l1 != NULL || l2 != NULL || carry != 0 ) {
        digit = 0;
        if ( l1 != NULL ) {
            digit += l1->val;
            l1 = l1->next;
        }
        if ( l2 != NULL ) {
            digit += l2->val;
            l2 = l2->next;
        }
        digit += carry;
        carry = digit / 10;

        struct ListNode *tmp = malloc( sizeof(struct ListNode) );
        tmp->val = digit % 10;
        tmp->next = NULL;
        if ( last != NULL ) {
            last->next = tmp;
        }
        if ( first == NULL ) {
            first = tmp;
        }
        last = tmp;
    }

    return first;
}
