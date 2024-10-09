//GFG 
class Solution {
  public:
    Node *removeDuplicates(Node *head) {
        // your code goes here
        unordered_set<int>mp;
        Node *prev;
        Node *temp=head;
        
        while(temp!=NULL){
            if(mp.find(temp->data)!=mp.end()){
                prev->next=temp->next;
            }else{
                mp.insert(temp->data);
                prev=temp;
            }
            temp=temp->next;
        }
        
        return head;
    }
};
