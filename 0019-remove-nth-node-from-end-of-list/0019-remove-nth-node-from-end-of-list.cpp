class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*temp=head;
        int count=0;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        if(n==count)return head->next;
        if(count==0||count==1)return NULL;
        temp=head;
        for(int i=0;i<count-n-1;i++){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna