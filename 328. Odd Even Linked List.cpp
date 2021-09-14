class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
                if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* oddh=head;
        ListNode* odd=head;
        ListNode* evh=head->next;
        ListNode* ev=head->next;
        
        while(ev!=NULL&&ev->next!=NULL){
            odd->next=odd->next->next;
            ev->next=ev->next->next;
            odd=odd->next;
            ev=ev->next;        
        }
        odd->next=evh;
        
        return head;    
    }
};
