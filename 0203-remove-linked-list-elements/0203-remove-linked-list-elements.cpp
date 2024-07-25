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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode*dummy=new ListNode();
        dummy->next=head;

        ListNode*slow=dummy;
        ListNode*fast=head;

        while(fast){
            if(fast->val==val){
                slow->next=fast->next;
                fast=fast->next;
            }
            else{
                slow=slow->next;
                fast=fast->next;
            }
        }
        return dummy->next;
    }
};