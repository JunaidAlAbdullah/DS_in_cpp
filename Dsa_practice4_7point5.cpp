// Take two singly linked lists as input and check if their sizes are same or not


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



// int count_linked_list(Node* head)
// {
//      Node* temp = head;

//     int count = 0;
//     while (temp != NULL)
//     {
//         count++;
//         temp = temp->next;
//     }
//     return count;
// }



// int main()
// {
//    Node* head = NULL;
//    Node* tail = NULL;

//    Node* head1 = NULL;
//    Node* tail1 = NULL;

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

//     int val1;
//     while (true)
//    {
//     cin >> val1;
//     if (val1 == -1)
//     {
//         break;
//     }
//     insert_at_tail(head1, tail1, val1);
//    }
//     int size = count_linked_list(head);
//     int size1 = count_linked_list(head1);

//     if (size == size1)
//     {
//         cout << "YES";
//     }
//     else
//     {
//         cout << "NO";
//     }

//     return 0;
// }











// Take a singly linked list as input and print the reverse of the linked list.



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

//     while (temp != NULL)
//     {
//         cout << temp->val << endl;
//         temp = temp->next;
//     }
// }



// void print_reverse(Node* temp)
// {
//     // base case
//     if (temp == NULL)
//     {
//         return;
//     }

//     print_reverse(temp->next);
//     cout << temp->val << " ";
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
//    print_reverse(head);


// // complexity O(N)

//     return 0;
// }









// Take a singly linked list as input, then print the maximum value of them.


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



// int find_max(Node* head)
// {
//     if (head == NULL)
//     {
//         return INT_MIN;
//     }

//     Node* temp = head;

//     int maximum = temp->val;
//     while (temp != NULL)
//     {
//         if (temp->val > maximum)
//         {
//             maximum = temp->val;
//         }
//         temp = temp->next;
//     }
//     return maximum;
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
//    int maxi = find_max(head);

//    cout << maxi << endl;


// // complexity O(N)

//     return 0;
// }









//  Take a singly linked list as input and sort it in descending order. Then print the list.



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
        cout << temp->val << " ";
        temp = temp->next;
    }
}



void sort_ll(Node* head)
{
    for (Node* i = head; i->next != NULL; i = i->next)
    {
        for (Node* j = i->next; j != NULL; j = j->next)
        {
            if (i->val < j->val) // for assending just change the "<" into ">"
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