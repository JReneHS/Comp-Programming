#include <bits/stdc++.h>

using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
      vector<int> aa;
      ListNode *ss,*sa;
      while(head != NULL) {
        aa.push_back(head->val);
        head = head->next;
      }
      reverse(aa.begin(),aa.end());
      
      ss = new ListNode();
      
      for(auto &x : aa ) {
        sa = ss;
        while(sa->next != NULL) {
          sa = sa->next;
        }
          sa->next = new ListNode(x);
      }
      ss = ss->next;
      return ss;
    }
};
