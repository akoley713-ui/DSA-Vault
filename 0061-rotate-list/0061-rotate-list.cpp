class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode*temp=head;
        int count=0;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        if(count!=0)k=k%count;
        if(k==0)return head;
        temp=head;
        if(head==NULL || head->next==NULL)return head;
        for(int i=0;i<count-k-1;i++){
            temp=temp->next;
        }
        ListNode* newHead=temp->next;
        temp->next=NULL;
        ListNode*last=newHead;
        while(last->next!=NULL){
            last=last->next;
        }
        last->next=head;
        return newHead;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna