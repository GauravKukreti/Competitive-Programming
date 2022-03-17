class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        ListNode *curr = head;

        while (curr != NULL && curr->next != NULL)
        {
            ListNode *nex = curr->next;
            if (curr->val == nex->val)
            {
                curr->next = nex->next;
                delete nex;
            }
            else
                curr = curr->next;
        }

        return head;
    }
};