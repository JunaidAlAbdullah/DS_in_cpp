// manually

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


// int main()
// {
//     Node* head = new Node(10);
//     Node* a = new Node(20);
//     Node* b = new Node(30);
//     Node* c = new Node(40);

//     head->next = a;
//     a->next = b;
//     b->next = c;

//     cout << head->val << endl;
//     cout << head->next->val << endl;
//     cout << head->next->next->val << endl;
//     cout << head->next->next->next->val << endl;

//     return 0;
// }









// With loop

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


int main()
{
    Node* head = new Node(100);
    Node* a = new Node(200);
    Node* b = new Node(300);
    Node* c = new Node(400);

    head->next = a;
    a->next = b;
    b->next = c;


    // manually
    // cout << head->val << endl;
    // cout << head->next->val << endl;
    // cout << head->next->next->val << endl;
    // cout << head->next->next->next->val << endl;


    // while (head != NULL)
    // {
    //     cout << head->val << endl;
    //     head = head->next;
    // }
    
    // if i print this loop twice it will not print twice as same as before. because head is already shifted to null.


    Node* temp = head;

    
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }


// for running again---

    temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }

    return 0;
}