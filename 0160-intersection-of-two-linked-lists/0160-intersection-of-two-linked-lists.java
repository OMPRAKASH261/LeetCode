public class Solution {
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        if(headA == null || headB == null) return null;
        
        ListNode p1 = headA, p2 = headB;

        while(p1 != p2){
            p1 = p1 == null ? headB : p1.next;
            p2 = p2 == null ? headA : p2.next;
        }
        return p1;
    }
}

/*
Approach
•	Keep two pointers, one on  headA  and one on  headB .
•	Move both one step at a time.
•	When pointer  A  reaches the end, redirect it to  headB .
•	When pointer  B  reaches the end, redirect it to  headA .
•	If the lists intersect, the pointers meet at the intersection node.
•	If they do not intersect, both become  null  at the same time.

Why it works
Both pointers traverse the same total length:  
 lenA + lenB .  
So they become aligned at the common intersection point without needing extra memory.

Complexity
•	Time:  O(m + n) 
•	Space:  O(1) 
*/