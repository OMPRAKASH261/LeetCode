class Solution {
public:
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
        // SC = O(1)
        ListNode* c = new ListNode(100);
        ListNode* temp = c;
        while(a!=NULL && b!=NULL){
            if(a->val <+ b->val){
                temp->next = a;
                a = a->next;
                temp = temp->next;
            }
            else{
                temp->next = b;
                b = b->next;
                temp = temp->next;
            }
        }
        if(a==NULL) temp->next = b;
        else temp->next = a;
        return c->next;
    }
};

// Approach :- T.C :- O(N+M), S.C :- O(1)
/* 
Approach
•	Create a dummy node  c  and keep  temp  at the end of the merged list.
•	Compare the current nodes of  a  and  b .
•	Attach the smaller node to  temp->next .
•	Move the pointer of that list forward.
•	Move  temp  forward too.
•	When one list ends, attach the remaining part of the other list.[geeksforgeeks +1]
Why it works
Because both lists are already sorted, the smaller front node is always the correct next node in the merged result.[algomaster +1]
Using a dummy node avoids special handling for the head of the merged list
*/