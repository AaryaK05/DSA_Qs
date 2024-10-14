//GFG
class Solution {
  public:
    // Function to find intersection point in Y shaped Linked Lists.
    int intersectPoint(Node* head1, Node* head2) {
        // Your Code Here
        
        if(!head1 || !head2){
            return 0;
        }
           
        Node *temp1=head1;
        Node *temp2=head2;
        
        while(temp1!=temp2){
            if(temp1){
                temp1=temp1->next;
            }else{
                temp1=head1;
            }
            
            if(temp2){
                temp2=temp2->next;
            }else{
                temp2=head2;
            }
        }
        
        return temp1->data;
    }
};
