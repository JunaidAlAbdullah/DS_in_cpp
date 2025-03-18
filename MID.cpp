// Remove Duplicate Again

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     list<int> myList;
//     int value;

//     while (true)
//     {
//         cin >> value;
//         if (value == -1)
//         {
//             break;
//         }
//         myList.push_back(value);
//     }

//     myList.sort();
//     myList.unique();

//     for (int val : myList)
//     {
//         cout << val << " ";
//     }
//     cout << endl;

//     return 0;
// }

// Pallindrome

// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *next;
//     Node *prev;

//     Node(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//         this->prev = NULL;
//     }
// };

// void print_forward(Node *head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->val << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// void insert_at_tail(Node *&head, Node *&tail, int val)
// {
//     Node *newnode = new Node(val);

//     if (head == NULL)
//     {
//         head = newnode;
//         tail = newnode;
//         return;
//     }

//     tail->next = newnode;
//     newnode->prev = tail;
//     tail = newnode;
// }

// bool is_palindrome(Node *head)
// {
//     Node *tail = head;

//     while (tail->next != NULL)
//     {
//         tail = tail->next;
//     }

//     while (head != NULL && tail != NULL && head != tail && head->prev != tail)
//     {
//         if (head->val != tail->val)
//         {
//             return false;
//         }
//         head = head->next;
//         tail = tail->prev;
//     }

//     return true;
// }

// int main()
// {
//     Node *head = NULL;
//     Node *tail = NULL;

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

//     if (is_palindrome(head))
//     {
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }

//     return 0;
// }











// Queries Again

// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *next;
//     Node *prev;
//     Node(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//         this->prev = NULL;
//     }
// };

// void print_forward(Node *head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->val << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// void print_reverse(Node *tail)
// {
//     Node *temp = tail;
//     while (temp != NULL)
//     {
//         cout << temp->val << " ";
//         temp = temp->prev;
//     }
//     cout << endl;
// }

// void insert_at_index(Node *&head, Node *&tail, int index, int val, int &size)
// {
//     if (index < 0 || index > size)
//     {
//         cout << "Invalid" << endl;
//         return;
//     }

//     Node *newnode = new Node(val);

//     if (index == 0)
//     {
//         if (head == NULL)
//         {
//             head = newnode;
//             tail = newnode;
//         }
//         else
//         {
//             newnode->next = head;
//             head->prev = newnode;
//             head = newnode;
//         }
//     }
//     else if (index == size)
//     {
//         tail->next = newnode;
//         newnode->prev = tail;
//         tail = newnode;
//     }
//     else
//     {
//         Node *temp = head;
//         for (int i = 0; i < index - 1; i++)
//         {
//             temp = temp->next;
//         }
//         newnode->next = temp->next;
//         temp->next->prev = newnode;
//         temp->next = newnode;
//         newnode->prev = temp;
//     }
//     size++;
// }

// int main()
// {
//     Node *head = NULL;
//     Node *tail = NULL;
//     int size = 0;

//     int Q;
//     cin >> Q;

//     while (Q != 0)
//     {
//         int X, V;
//         cin >> X >> V;

//         if (X < 0 || X > size)
//         {
//             cout << "Invalid" << endl;
//         }
//         else
//         {
//             insert_at_index(head, tail, X, V, size);
//             cout << "L -> ";
//             print_forward(head);
//             cout << "R -> ";
//             print_reverse(tail);
//         }
//         Q--;
//     }

//     return 0;
// }











// Queries 2

// #include <bits/stdc++.h>
// using namespace std;

// void print_forward(list<int> &myList)
// {
//     cout << "L -> ";
//     for (int val : myList)
//     {
//         cout << val << " ";
//     }
//     cout << endl;
// }

// void print_reverse(list<int> myList)
// {
//     myList.reverse();
//     cout << "R -> ";
//     for (int val : myList)
//     {
//         cout << val << " ";
//     }
//     cout << endl;
// }

// void delete_at_index(list<int> &myList, int index)
// {
//     if (index >= 0 && index < myList.size())
//     {
//         auto it = myList.begin();
//         int count = 0;
//         while (count < index && it != myList.end())
//         {
//             it++;
//             count++;
//         }
//         if (it != myList.end())
//         {
//             myList.erase(it);
//         }
//     }
// }

// int main()
// {
//     int Q;
//     cin >> Q;

//     list<int> myList;

//     while (Q != 0)
//     {
//         int X, V;
//         cin >> X >> V;

//         if (X == 0)
//         {
//             myList.push_front(V);
//         }
//         else if (X == 1)
//         {
//             myList.push_back(V);
//         }
//         else if (X == 2)
//         {
//             delete_at_index(myList, V);
//         }

//         print_forward(myList);
//         print_reverse(myList);

//         Q--;
//     }

//     return 0;
// }









// Browser History 

#include <bits/stdc++.h>

using namespace std;

struct Node {
    string address;
    Node* next;
    Node* prev;

    Node(string addr) : address(addr), next(nullptr), prev(nullptr) {}
};

class LinkedList {
public:
    Node* head;

    LinkedList() : head(nullptr) {}

    void insert(string address) {
        Node* newNode = new Node(address);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->prev = temp;
        }
    }

    string find(string address) {
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->address == address) {
                return address;
            }
            temp = temp->next;
        }
        return "Not Available";
    }

    string next() {
        if (head == nullptr) {
            return "Not Available";
        }
        if (head->next == nullptr) {
            return "Not Available";
        }
        head = head->next;
        return head->address;
    }

    string prev() {
        if (head == nullptr) {
            return "Not Available";
        }
        if (head->prev == nullptr) {
            return "Not Available";
        }
        head = head->prev;
        return head->address;
    }
};

int main() {
    LinkedList list;
    string address;
    while (cin >> address && address != "end") {
        list.insert(address);
    }

    int Q;
    cin >> Q;

    string command, arg;
    cin >> command >> arg; 
    cout << list.find(arg) << endl; 

    for (int i = 1; i < Q; ++i) {
        cin >> command;
        if (command == "next") {
            cout << list.next() << endl;
        } else if (command == "prev") {
            cout << list.prev() << endl;
        } else if (command == "visit") {
            cin >> arg;
            cout << list.find(arg) << endl;
        }
    }

    return 0;
}