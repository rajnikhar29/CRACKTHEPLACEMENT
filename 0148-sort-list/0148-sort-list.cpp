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
    ListNode* sortList(ListNode* head) {
        vector<int>v;
        ListNode*temp=head;
        while(temp){
            v.push_back(temp->val);
            temp=temp->next;
        }

        sort(v.begin(),v.end());
        int i=0;
        temp=head;

        while(temp){
            temp->val=v[i];
            temp=temp->next;
            i++;
        }
        return head;






        // if(head==NULL) return NULL;
        // if(head->next==NULL) return head;
        // ListNode*temp=head;
        // ListNode*dummy=temp;

        // while(dummy->next!=NULL){
        //     if(temp->val > temp->next->val){
        //         temp->next=temp->next->next;
        //         temp->next->next=temp;
        //         dummy=dummy->next;
        //     }
        // }
        // return temp;
    }
};