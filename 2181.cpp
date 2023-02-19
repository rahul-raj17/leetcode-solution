// 2181. Merge Nodes in Between Zeros
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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* curr = head->next;
        ListNode* move = head;
        ListNode* prev = nullptr;

        while(curr) {
            if(curr->val) {
                move -> val += curr -> val;
            }else {
                move -> next = curr;
                prev = move;
                move = curr;
            }
            curr = curr->next;
        }
        prev -> next = nullptr;
        return head;
       
    }
};