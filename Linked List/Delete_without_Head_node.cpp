//GFG 
class Solution {
  public:
    // Function to delete a node without any reference to the head pointer.
    void deleteNode(Node* del_node) {
        // Your code here
        Node *temp=del_node;
        temp=temp->next;
        
        del_node->data=temp->data;
        del_node->next=temp->next;
        
    }
};
