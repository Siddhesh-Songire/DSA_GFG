/* 
Four  differnt solutions - https://leetcode.com/problems/intersection-of-two-linked-lists/discuss/1093014/C%2B%2B-Four-different-solutions

*160. Intersection of Two Linked Lists

Given the heads of two singly linked-lists headA and headB, return the node at which the two lists intersect. If the two linked lists have no intersection at all, return null.

For example, the following two linked lists begin to intersect at node c1:

The test cases are generated such that there are no cycles anywhere in the entire linked structure.

! Brute force TC= O(n*m) space O(1);


 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 
!class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* InsNode;
        ListNode* ptr1 = headA;
        ListNode* ptr2 = headB;
        while(ptr1 != NULL){
            ptr2 = headB;
            while(ptr2 != NULL){
                if(ptr1 == ptr2) return ptr1;
                ptr2 = ptr2->next;


            }
            ptr1 = ptr1->next;
        }
        return NULL;
    }
};

!optimal solution  Time Complexity : O(m + n) Space Complexity : O(1)
class Solution {
public:
	ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
		ListNode *ptr1 = headA;
		ListNode *ptr2 = headB;
		while(ptr1 != ptr2){
			if(ptr1 == NULL){
				ptr1 = headB;
			}
			else{
				ptr1 = ptr1 -> next;
			}
			if(ptr2 == NULL){
				ptr2 = headA;
			}
			else{
				ptr2 = ptr2 -> next;
			}
		}
		return ptr1;
	}
};

*/