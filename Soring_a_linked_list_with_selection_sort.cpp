// ascending order

#include<bits/stdc++.h>
using namespace std;


class Node
{
    public:
        int val;
        Node* next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};




void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newnode = new Node(val);
  
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    

    Node* temp = head;
    

    tail->next = newnode;

    tail = tail->next; // tail = newnode; (same shit)

    // complexity - O(1) yeeeee
}



void print_linked_list(Node* head)
{
     Node* temp = head;

    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}



void sort_ll(Node* head)
{
    for (Node* i = head; i->next != NULL; i = i->next)
    {
        for (Node* j = i->next; j != NULL; j = j->next)
        {
            if (i->val > j->val) // for discending just change the ">" into "<"
            {
                swap(i->val , j->val);
            }  
        }
    }
}



int main()
{
   Node* head = NULL;
   Node* tail = NULL;

   int val;
   while (true)
   {
    cin >> val;
    if (val == -1)
    {
        break;
    }
    insert_at_tail(head, tail, val);
   }
    
    sort_ll(head);
    print_linked_list(head);


// complexity O(N)

    return 0;
}