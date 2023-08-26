
class Solution {
public:
    Node* copyRandomList(Node* head) {

        Node* iter=head;
        Node* front = head;

        while(iter!=NULL){
            front=iter->next;
            Node* mv = new Node(iter->val);
            iter->next = mv;
            mv->next = front;
            iter=front;
        }

        iter=head;
        while(iter!=NULL){
            if(iter->random!=NULL){
                iter->next->random = iter->random->next;
            }
            iter=iter->next->next;
        }
        iter=head;
        Node* dummy = new Node(0);
        Node* dummy_clone = dummy;

        while(iter!=NULL){
            front = iter->next->next;

            dummy_clone->next = iter->next;
            
            dummy_clone = dummy_clone->next;
            iter->next = front;
            iter=iter->next;
        }

        return dummy->next;
    }
};