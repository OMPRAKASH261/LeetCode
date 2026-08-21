class Solution {
    static ListNode reverse(ListNode head){
        ListNode prev = null;
        while(head != null){
            ListNode next = head.next;
            head.next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }
    public boolean isPalindrome(ListNode head) {
        ListNode fast = head, slow = head;

        while(fast != null && fast.next != null){
            fast = fast.next.next;
            slow = slow.next;
        }

        if(fast != null){
            slow = slow.next;
        }
        
        slow = reverse(slow);
        fast = head;

        while(slow != null && fast != null){
            if(slow.val != fast.val){
                return false;
            }
            fast = fast.next;
            slow = slow.next;
        }
        return true;
    }
}

/* T.C :- O(n),  S.C :- O(1)
approach
•	Use  fast  and  slow  pointers to find the middle.
•	If the list has odd length, skip the middle node.
•	Reverse the second half.
•	Compare the first half and reversed second half node by node.
•	If all values match, the list is a palindrome.
*/