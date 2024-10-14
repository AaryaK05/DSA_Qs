//GFG
class Solution {
  public:
    // Function to remove a loop in the linked list.
    void removeLoop(Node* head) {
        // code here
        // just remove the loop without losing any nodes
        if(!head){
            return;
        }
        
        Node* slow=head;
        Node* fast=head;
        
        while(fast && fast->next){
            fast=fast->next->next;
            slow=slow->next;
            if(slow==fast){
                break;
            }
        }
        
        if(slow!=fast){
            return;
        }
        
        
        slow=head;
        if(slow==head && fast==head){
            while(fast->next!=head){
                fast=fast->next;
            }
        }else{
            while(slow->next!=fast->next){
                slow=slow->next;
                fast=fast->next;
            }   
        }

        fast->next=NULL;
        
    }
};
