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
        ListNode* node=head;int c=0;
        while(head!=nullptr){
            c++;head=head->next;
        }
     int x=c-n-1;
        head=node;
        if(x==-1){
            head=head->next;}
            else{
        while(x--){
            if(node->next)
            node=node->next;
            
        }
            node->next=node->next->next;
            }        return head;
    }
};