class Solution {
public:
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
        int count1=0,count2=0;
        ListNode*temp1=head1;
        ListNode*temp2=head2;
        while(temp1!=NULL){
            temp1=temp1->next;
            count1++;
        }
        while(temp2!=NULL){
            temp2=temp2->next;
            count2++;
        }
        int diff=abs(count1-count2);
        temp1=head1;
        temp2=head2;
        if(count1>count2){
            for(int i=0;i<diff;i++){
                temp1=temp1->next;
            }
        }
        else if(count1<count2){
            for(int i=0;i<diff;i++){
                temp2=temp2->next;
            }
        }
        while(temp1!=NULL&&temp2!=NULL){
            if(temp1==temp2)return temp1;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return NULL;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna