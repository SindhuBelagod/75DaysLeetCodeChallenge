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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode temprorary(0,head);
        ListNode *present=&temprorary;
        for(int i=1;i<left;i++)
        {
            present=present->next;
        }
        ListNode *current=present->next;
        for(int i=0;i<right-left;i++)
        {
            ListNode *temp=current->next;

            current->next= temp->next;
            temp->next=present->next;
            present->next=temp;
        }
        return temprorary.next;
    }
};