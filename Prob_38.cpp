/*
*234. Palindrome Linked List

Given the head of a singly linked list, return true if it is a palindrome.
Example 1:

Input: head = [1,2,2,1]
Output: true

Constraints:

The number of nodes in the list is in the range [1, 105].
0 <= Node.val <= 9

* Brute force approch TC O(N) space O(n)
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        bool isPalindrome;
        vector<int> v;
        ListNode* ptr = head;
        while(ptr!= NULL){
            v.push_back(ptr->val);
            ptr = ptr->next;
        }
        
        vector<int> rev ;
        rev = v;
        
        reverse(rev.begin(),rev.end());

        if(v == rev) return true;
        else return false;
        
    }
};

! Optimised solution TC O(n/2) space O(1)

 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 
!class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return true;
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        slow->next = reverseList(slow->next);
        slow = slow->next;
        
        while(slow != NULL){
            if(head->val != slow->val) return false;
            
            head = head->next;
            slow = slow->next;
        }
        return true;
   
    }
    
    ListNode* reverseList(ListNode* head){
        ListNode* pre = NULL;
        ListNode* curr = head;
        
        while(curr != NULL){
            ListNode* nxtptr = curr->next;
            curr->next = pre;
            pre = curr;
            curr = nxtptr;
        }
        return pre;
    }
};

*/