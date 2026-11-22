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
    ListNode* swapNodes(ListNode* head, int n) {
        int count=0;
        ListNode*temp=head;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        temp=head;
        ListNode*temp1=head;
        for(int i=1;i<=count-n;i++){
            temp=temp->next;
        }
        for(int i=1;i<n;i++){
            temp1=temp1->next;
        }
        swap(temp->val,temp1->val);
        return head;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna