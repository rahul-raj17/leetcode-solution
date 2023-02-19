// 25. Reverse Nodes in k-Group
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
    ListNode* reverseKGroup(ListNode* head, int k) {
        // base case
        if(head==NULL || head->next == NULL) {
            return head;
        }

        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* forward=NULL;
        int count=0;

        ListNode* iterate = head;
        for(int i=0; i<k; i++) {
            if(iterate == NULL) {
                return head;
            }
            iterate = iterate->next;
        }

        while(curr!=NULL && count<k) {
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
            count++;
        }

       
            head->next = reverseKGroup(forward,k);
       

        return prev;
    }
};