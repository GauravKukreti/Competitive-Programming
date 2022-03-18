class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        int count = 0;
        ListNode *curr = head;
        while (curr != NULL)
        {
            count += 1;
            curr = curr->next;
        }

        curr = head;

        if (n == count)
        {
            head = head->next;
            delete curr;
            return head;
        }

        for (int i = 1; i < (count - n); i++)
            curr = curr->next;

        ListNode *temp = curr->next;
        curr->next = curr->next->next;
        delete (temp);

        return head;
    }
};