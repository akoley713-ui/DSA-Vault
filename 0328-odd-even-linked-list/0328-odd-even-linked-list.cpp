class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        ListNode*d1=new ListNode(-1);
        ListNode*d2=new ListNode(-1);
        ListNode*t1=d1;
        ListNode*t2=d2;
        ListNode*temp=head;
        if(head==NULL)return NULL;
        if(head->next==NULL)return head;
        int index=1;
        while(temp!=NULL){
            if(index%2==1){
                t1->next=temp;
                t1=temp;
            }
            else{
                t2->next=temp;
                t2=temp;
            }
            temp=temp->next;
            index++;
        }
        t2->next=NULL;
        t1->next=d2->next;
        return d1->next;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna