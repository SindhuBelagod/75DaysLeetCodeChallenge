/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* fat=head;
        ListNode* thin=head;
        while(thin!=nullptr && thin->next!=nullptr)
        {
            fat=fat->next;
            thin=thin->next->next;

            if(fat==thin)
            {
                return true;

            }
        
        }
        
        return false;
    }
};