//GFG
class Solution {
  public:
    // Function to reverse a doubly linked list
    DLLNode* reverseDLL(DLLNode* head) {
        // Your code here
        DLLNode* t1=head;
        DLLNode* temp;
        
        while(t1){
            temp=t1->next;
            t1->next=t1->prev;
            t1->prev=temp;
            
            if(t1->prev){
                t1=t1->prev;
            }
            else{
                break;
            }
        }
        
       
        
        return t1;
    }
};
