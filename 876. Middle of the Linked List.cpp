class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
        ListNode* slowp=head;
        ListNode* fastp=head;
        while(fastp!=NULL&&fastp->next!=NULL){
            slowp=slowp->next;
            fastp=fastp->next->next;
        }
        return slowp;
    }
};
