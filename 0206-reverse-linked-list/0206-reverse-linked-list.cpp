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
    ListNode*prev=NULL;
    ListNode*curr=head;

    while(curr!=NULL){
        ListNode* forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;//nya head
        
        
// if(head==NULL || head->next==NULL) return head;
        
//         ListNode*last=reverseList(head->next);
        
//         head->next->next=head;//1-->2-> ka next null hoga-->1
//         head->next=NULL;//1-->next ==null
        
//         return last;
        
        
        
        
        
    }
};