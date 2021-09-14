class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *temp= headA;  //assigning head to a temp node
        while(temp->next != NULL){
            temp=temp->next;
		}                                      
        temp->next=headB;        
        
        ListNode *slow=headA;
        ListNode *fast=headA;
        
        while(slow && fast  && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                break;
            }
        }
        
        if (slow != fast){
            temp->next=NULL;  
            return NULL;
        }
        
        
        slow=headA;
        
        while(slow != fast){
            slow=slow->next;
            fast=fast->next;
        }
        
        temp->next=NULL;  // Reverting the changes made to the structure of list
        return slow;
    
    }
};
