class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count =-1,count2=0;
        ListNode* temp=head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
                ListNode* curr=head;
        if(count+1 == n) head = curr->next;

        while(curr->next!=NULL&&curr!=NULL){
                        ++count2;
            if(count2==count-n+1){
                curr->next=curr->next->next;
            }
            else{
                curr=curr->next;
            }
        }
        return head;
    }
};
