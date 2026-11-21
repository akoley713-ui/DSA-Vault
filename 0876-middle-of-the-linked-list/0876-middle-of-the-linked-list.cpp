class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int count=0;
        ListNode* temp=head;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        temp=head;
        for(int i=0;i<count/2;i++){
            temp=temp->next;
        }
        return temp;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna