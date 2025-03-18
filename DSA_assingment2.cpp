// Get Difference

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

//     tail = tail->next;

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

// int find_min(Node* head)
// {
//     if (head == NULL)
//     {
//         return INT_MAX;
//     }

//     Node* temp = head;

//     int minimum = temp->val;
//     while (temp != NULL)
//     {
//         if (temp->val < minimum)
//         {
//             minimum = temp->val;
//         }
//         temp = temp->next;
//     }
//     return minimum;
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
//    int mini = find_min(head);

//     int dif = maxi - mini;

//     cout << dif << endl;

//     return 0;
// }










// search

// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node* next;
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
//     tail->next = newnode;
//     tail = tail->next;
// }

// int find_index(Node* head, int x)
// {
//     int index = 0;
//     Node* temp = head;
//     while (temp != NULL)
//     {
//         if (temp->val == x)
//         {
//             return index;
//         }
//         temp = temp->next;
//         index++;
//     }
//     return -1;
// }

// int main()
// {
//     int T;
//     cin >> T;
//     while (T != 0)
//     {
//         Node* head = NULL;
//         Node* tail = NULL;

//         int val;
//         while (true)
//         {
//             cin >> val;
//             if (val == -1)
//             {
//                 break;
//             }
//             insert_at_tail(head, tail, val);
//         }

//         int X;
//         cin >> X;

//         int result = find_index(head, X);
//         cout << result << endl;

//         T--;
//     }
//     return 0;
// }












// same to same

// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node* next;
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

//     tail = tail->next;
// }


// int count_linked_list(Node* head)
// {
//     int count = 0;
//     Node* temp = head;
//     while (temp != NULL)
//     {
//         count++;
//         temp = temp->next;
//     }
//     return count;
// }


// int equal(Node* head1, Node* head2)
// {
//     int size1 = count_linked_list(head1);
//     int size2 = count_linked_list(head2);

//     if (size1 != size2)
//     {
//         return 0;
//     }

//     Node* temp1 = head1;
//     Node* temp2 = head2;

//      while (temp1 != NULL && temp2 != NULL)
//     {
//         if (temp1->val != temp2->val)
//         {
//             return 0;
//         }
//         temp1 = temp1->next;
//         temp2 = temp2->next;
//     }

    
//     if (temp1 != NULL || temp2 != NULL)
//     {
//         return 0;
//     }

//     return 1;
// }



// int main()
// {
//     Node* head = NULL;
//     Node* tail = NULL;

//     Node* head1 = NULL;
//     Node* tail1 = NULL;

//     int val;
//     while (true)
//     {
//         cin >> val;
//         if (val == -1)
//         {
//             break;
//         }
//         insert_at_tail(head, tail, val);
//     }

//     int val1;
//     while (true)
//     {
//         cin >> val1;
//         if (val1 == -1)
//         {
//             break;
//         }
//         insert_at_tail(head1, tail1, val1);
//     }


//     if (equal(head, head1) == 1)
//     {
//         cout << "YES";
//     }
//     else
//     {
//         cout << "NO";
//     }
    

//     return 0;
// }









// Query 


// #include <bits/stdc++.h>
// using namespace std;

// class Node 
// {
// public:
//     int val;
//     Node* next;
//     Node(int val) 
//     {
//         this->val = val;
//         this->next = NULL;
//     }
// };

// void insert_at_head(Node* &head, int val) 
// {
//     Node* newNode = new Node(val);
//     newNode->next = head;
//     head = newNode;
// }

// void insert_at_tail(Node* &head, Node* &tail, int val) 
// {
//     Node* newNode = new Node(val);
//     if (head == NULL) 
//     {
//         head = tail = newNode;
//         return;
//     }
//     tail->next = newNode;
//     tail = newNode;
// }

// void delete_at_index(Node* &head, Node* &tail, int index)
// {
//     if (head == NULL)
//     {
//         return;
//     }
    
//     if (index == 0) 
//     {
//         Node* temp = head;
//         head = head->next;
//         if (head == NULL) 
//         {
//             tail == NULL;
//         }
//         delete temp;
//         return;
//     }

//     Node* temp = head;
//     for (int i = 0; temp != NULL && i < index - 1; i++)
//     {
//         temp = temp->next;
//     }

//     if (temp == NULL || temp->next == NULL)
//     {
//         return;
//     }

//     Node* nodeToDelete = temp->next;
//     temp->next = nodeToDelete->next;
//     if (nodeToDelete->next == NULL) 
//     {
//         tail = temp;
//     }

//     delete nodeToDelete;
// }

// void print_linked_list(Node* head) 
// {
//     Node* temp = head;
//     while (temp != NULL) 
//     {
//         cout << temp->val << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int main() 
// {
//     int Q;
//     cin >> Q;

//     Node* head = NULL;
//     Node* tail = NULL;

//     for(int i = 0; i<Q; i++)
//     {
//         int X, V;
//         cin >> X >> V;

//         if (X == 0) 
//         {
            
//             insert_at_head(head, V);
//             if (tail == NULL) 
//             {
//                 tail = head;
//             }   
//         } 

//         else if (X == 1) 
//         {
//          insert_at_tail(head, tail, V);
//         } 

//         else if (X == 2) 
//         {
//             delete_at_index(head, tail, V);

//             if (head == NULL) 
//             {
//                 tail = NULL;
//             } 
//         }

//         print_linked_list(head);
//     }

//     return 0;
// }









// Remove Duplicate


#include <bits/stdc++.h>
using namespace std;

class Node {
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

    tail->next = newnode;
    tail = tail->next;
}

int duplicate(Node* &head) 
{
    int freq[101] = {0}; 

    Node* temp = head;
    while (temp != NULL) {
        freq[temp->val]++;

        if (freq[temp->val] > 1) 
        {
            return 1; 
        }
        temp = temp->next;
    }

    return 0;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while (true) 
    {
        cin >> val;
        if (val == -1) {
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

    return 0;
}
