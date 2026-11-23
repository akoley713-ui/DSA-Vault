class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        int count=0;
        ListNode*temp=head;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        ListNode*temp1=head;
        for(int i=0;i<(count/2)-1;i++){
            temp1=temp1->next;
        }
        if(count==3){
            head->next=head->next->next;
            return head;
        }
        else if(count==2){
            head->next=NULL;
            return head;
        }
        else if(count==1)return NULL;
        else temp1->next=temp1->next->next;
        return head;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna