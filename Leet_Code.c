// Middle of the linked list

class Solution
{
public:
    int size(ListNode *head)
    {
        ListNode *temp = head;
        int count = 0;

        while (temp != NULL)
        {
            count++;
            temp = temp->next;
        }
        return count;
    }
    ListNode *middleNode(ListNode *head)
    {
        int sz = size(head);

        ListNode *temp = head;
        for (int i = 0; i < sz / 2; i++)
        {
            temp = temp->next;
        }
        return temp;
    }
};

//






class Solution
{
public:
    ListNode *removeElements(ListNode* head, int val)
    {
        // Create a dummy node before the head to simplify edge cases
        ListNode *dummy = new ListNode(0, head);
        ListNode *current = dummy;

        while (current->next != nullptr)
        {
            if (current->next->val == val)
            {
                // Remove the node with value `val`
                ListNode *temp = current->next;
                current->next = current->next->next;
                delete temp; // Free the memory of the removed node
            }
            else
            {
                // Move to the next node
                current = current->next;
            }
        }

        // Return the new head of the list
        ListNode *newHead = dummy->next;
        delete dummy; // Free the dummy node
        return newHead;
    }
};
