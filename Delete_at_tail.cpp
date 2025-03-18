// same as delete at any position. just change a index into tail index


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




void del_at_tail(Node* head, Node* tail, int index)
{
    Node* temp = head;
    for (int i = 1; i < index; i++)
    {
        temp = temp->next;
    }   
    // temp is at index - 1;

    Node* deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
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

   del_at_tail(head , tail, 3);
   print_linked_list(head);


// complexity O(N)

    return 0;
} 


// same as delete at any position. just change a index into tail index