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
    ListNode *temp;
    void reverse(ListNode *head){
        while(head!=NULL){
            ListNode *t = new ListNode();
            t->val = head->val;
            if(temp==NULL){
                temp = t;
            }else{
                t->next = temp;
                temp =t;
            }
            head=head->next;
        }
    }
    bool isPalindrome(ListNode* head) {
        reverse(head);
        while(head!=NULL){
            // cout<<head->val<<" "<<temp->val<<endl;
            if(head->val!=temp->val)
                return false;
            head=head->next;
            temp=temp->next;
        }
        return true;
    }
};