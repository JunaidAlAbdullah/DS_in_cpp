// Question: Take a singly linked list as input and print the size of the linked list.


// #include<bits/stdc++.h>
// using namespace std;


// class Node
// {
//     public:
//         int val;
//         Node* next;
//     Node(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//     }
// };




// void insert_at_tail(Node* &head, Node* &tail, int val)
// {
//     Node* newnode = new Node(val);
  
//     if (head == NULL)
//     {
//         head = newnode;
//         tail = newnode;
//         return;
//     }
    

//     Node* temp = head;
    

//     tail->next = newnode;

//     tail = tail->next; // tail = newnode; (same shit)

//     // complexity - O(1) yeeeee
// }



// void print_linked_list(Node* head)
// {
//      Node* temp = head;
//     int count = 0;
//     while (temp != NULL)
//     {   
//         count++;
       
//         temp = temp->next;
//     }
//      cout << count << endl;
// }



// int main()
// {
//    Node* head = NULL;
//    Node* tail = NULL;

//    int val;
//    while (true)
//    {
//     cin >> val;
//     if (val == -1)
//     {
//         break;
//     }
//     insert_at_tail(head, tail, val);
//    }
//    print_linked_list(head);


// // complexity O(N)

//     return 0;
// }



// Question: Take a singly linked list as input and check if the linked list contains any duplicate value. You can assume that the maximum value will be 100.


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


int duplicate(Node* head)
{
    int freq[101] = {0};

    Node* temp = head;
    while (temp != NULL)
    {
        freq[temp->val]++;

        if (freq[temp->val] > 1)
        {
            return 1;
        }
        temp = temp->next;
    }
    return 0;
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
   
   if (duplicate(head) == 1)
   {
    cout << "YES";
   }
   else
   {
    cout << "NO";
   }
   


// complexity O(N)

    return 0;
}






