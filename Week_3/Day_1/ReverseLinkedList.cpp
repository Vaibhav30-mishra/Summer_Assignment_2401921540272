class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* previous = NULL;
        ListNode* current = head;

        while (current != NULL) {
            ListNode* temp = current->next;

            current->next = previous;
            previous = current;
            current = temp;
        }

        return previous;
    }
};
