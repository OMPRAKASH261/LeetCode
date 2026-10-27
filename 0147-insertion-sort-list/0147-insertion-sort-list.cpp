class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        if(head == nullptr || head->next == nullptr){
            return head;
        }

        ListNode dummy(0);
        dummy.next = head;

        ListNode* prev = head;
        ListNode* curr = head->next;

        while(curr != nullptr){
            if (curr->val >= prev->val) {
                prev = curr;
                curr = curr->next;
            } else {
                ListNode* scan = &dummy;
                while (scan->next->val < curr->val) {
                    scan = scan->next;
                }

                prev->next = curr->next;
                curr->next = scan->next;
                scan->next = curr;
                curr = prev->next;
            }
        }

        return dummy.next;
    }
};