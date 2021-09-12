/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        
        ListNode*curr=head;
        int count=0;
        int p=0;
        while(curr!=NULL){
            count++;
            curr=curr->next;
        }
        ListNode*temp=head;
        for(int i=count;i>=0&&temp!=NULL;i--){
            
            p+=(temp->val)*pow(2,i-1);
            temp=temp->next;
        }
        return p;
    }
};
