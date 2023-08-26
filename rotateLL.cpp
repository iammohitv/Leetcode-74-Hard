
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        int size=1;
        ListNode* mv = head;
        if(!head||!head->next||k==0){
            return head;
        }
        while(mv->next && ++size){
            mv=mv->next;
        }
        mv->next=head;
        k = k%size;
        
        int x = size-k;
        while(x--){
            mv=mv->next;
        }
        head=mv->next;
        mv->next=NULL;
        return head; 
    }
};