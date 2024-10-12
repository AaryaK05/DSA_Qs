//Leetcode 19
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp1=head;
        ListNode* prev=temp1;
        ListNode* temp2=head;

        while(temp2!=NULL){
            if(n>0){
                n--;
            }else{
                prev=temp1;
                temp1=temp1->next;
            }
            temp2=temp2->next;
        }

        if(temp1==head){
            head=head->next;
        }else{
            prev->next=temp1->next;
        }
        
        return head;       
    }
};
