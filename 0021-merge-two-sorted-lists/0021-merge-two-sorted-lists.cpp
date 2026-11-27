class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL)return list2;
        if(list2==NULL)return list1;
        ListNode*head=NULL;
        if(list1->val<=list2->val){
            head=list1;
            head->next=mergeTwoLists(list1->next,list2);
        }
        else{
            head=list2;
            head->next=mergeTwoLists(list1,list2->next);
        }
        return head;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna