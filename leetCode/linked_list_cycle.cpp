#include <bits/stdc++.h>

using namespace std;

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
    bool hasCycle(ListNode *head) {
      auto token = true;
      auto s = 100001;
      while(s != 0){
        if(head != NULL){
          head = head->next;
          s--;
        } else {
          token = false;
          break;
        }
      }
      return token;
    }
};
