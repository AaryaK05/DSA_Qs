//GFG
class Solution {
  public:
    // Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node* head) {
        vector<int>count(3,0);
        
        Node *temp=head;
        while(temp!=NULL){
            count[temp->data]+=1;
            temp=temp->next;
        }
        
        temp=head;
        int i=0;
        while(temp!=NULL){
            if(count[i]!=0){
                count[i]-=1;
                temp->data=i;
            }
            else{
                i++;
                continue;
            }
            temp=temp->next;
        }
        return head;
    }
};
