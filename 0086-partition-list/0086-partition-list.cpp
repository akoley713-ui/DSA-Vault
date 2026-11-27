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
        ListNode*d1=new ListNode(-1);
        ListNode*d2=new ListNode(-1);
        ListNode*t1=d1;
        ListNode*t2=d2;
        ListNode*temp=head;
        if(head==NULL)return NULL;
        if(head->next==NULL)return head;
        while(temp!=NULL){
            if(temp->val<x){
                t1->next=temp;
                t1=temp;
            }
            else{
                t2->next=temp;
                t2=temp;
            }
            temp=temp->next;
        }
        t2->next=NULL;
        t1->next=d2->next;
        return d1->next;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna