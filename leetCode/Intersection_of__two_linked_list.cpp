/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
      ListNode *p1 = headA;
      ListNode *p2 = headB;
      auto cp1 = 0;
      auto cp2 = 0;
      while(p1 != NULL){
        p1 = p1->next;
        cp1++;
      }
      while(p2 != NULL){
        p2 = p2->next;
        cp2++;
      }
      auto dif = abs(cp1 - cp2);
      if(cp1 > cp2) {
        while(dif--) headA = headA->next;
      } else {
        while(dif--) headB = headB->next;
      }
      while(headA != headB) {
        headA = headA->next;
        headB = headB->next;
      }
      return headA;
    }
};