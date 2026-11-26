class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while(head!=NULL&&head->val==val)head=head->next;
        ListNode*temp=head;
        while(temp!=NULL&&temp->next!=NULL){
            if(temp->next->val==val){
                temp->next=temp->next->next;
            }
            else temp=temp->next;
        }
        if(head==NULL)return NULL;
        return head;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna