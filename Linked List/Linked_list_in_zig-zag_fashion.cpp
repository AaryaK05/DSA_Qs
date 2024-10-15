/GFG
class Solution {
  public:
    Node* zigZag(Node* head) {
        // your code goes here
        int i=0;
        Node* prev=head;
        Node* curr=head->next;
        
        if(!head || !head->next){
            return head;
        }
        
        
        while(curr){
            if(i%2==0){
                if(prev->data>curr->data){
                    swap(prev->data,curr->data);
                }
                prev=curr;
                curr=curr->next;
                i++;
            }else{
                if(prev->data<curr->data){
                    swap(prev->data,curr->data);
                }
                prev=curr;
                curr=curr->next;
                i++;
            }
        }
    }
};
