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
    ListNode* removeElements(ListNode* head, int val) {
        while(head!=nullptr && head->val==val)
        {
            head=head->next;
        }
        ListNode *present = head;
        while(present!=nullptr && present->next!=nullptr)
        {
            if(present->next->val==val)
            {
                present->next=present->next->next;
            }
            else
            {
                present=present->next;
            }
        }
        return head;
    }
};