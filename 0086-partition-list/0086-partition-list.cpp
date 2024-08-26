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
    ListNode* partition(ListNode* head, int x) {
          ListNode*slow=new ListNode(0); 
          ListNode*fast=new ListNode(0);//two list node for breaking
          

          ListNode*slowP=slow;
          ListNode*fastP=fast;//to traverse 

          while(head!=NULL){
            if(head->val < x) {
                slowP->next=head;
                slowP=slowP->next;
            }
            else{
                fastP->next=head;
                fastP=fastP->next;
            }
            head=head->next;
          }

          slowP->next=fast->next;//tricky make diagram
          fastP->next=NULL;

          return slow->next;
    }
};