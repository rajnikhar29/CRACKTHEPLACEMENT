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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*temp=new ListNode();
        temp->next=head;
        ListNode*fast=temp;
        ListNode*slow=temp;
        
        //kha tk jana h wo set krle
        for(int i=1;i<=n;i++){
            fast=fast->next;
            
        }
        
        //iterate now
        while(fast->next != NULL){
            fast = fast->next;
            slow = slow->next;
        }
        
        // adjusting pointers
        slow->next=slow->next->next;
        
        return temp->next;
        
        
    }
};