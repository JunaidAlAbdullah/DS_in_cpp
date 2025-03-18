#include <bits/stdc++.h>

using namespace std;

struct Node
{
    string address;
    Node *next;
    Node *prev;

    Node(string addr) : address(addr), next(nullptr), prev(nullptr) {}
};

class LinkedList
{
public:
    Node *head;

    LinkedList() : head(nullptr) {}

    void insert(string address)
    {
        Node *newNode = new Node(address);
        if (head == nullptr)
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;
            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->prev = temp;
        }
    }

    string find(string address)
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            if (temp->address == address)
            {
                return address;
            }
            temp = temp->next;
        }
        return "Not Available";
    }

    string next()
    {
        if (head == nullptr)
        {
            return "Not Available";
        }
        if (head->next == nullptr)
        {
            return "Not Available";
        }
        head = head->next;
        return head->address;
    }

    string prev()
    {
        if (head == nullptr)
        {
            return "Not Available";
        }
        if (head->prev == nullptr)
        {
            return "Not Available";
        }
        head = head->prev;
        return head->address;
    }
};

int main()
{
    LinkedList list;
    string address;
    while (cin >> address && address != "end")
    {
        list.insert(address);
    }

    int Q;
    cin >> Q;

    string command, arg;
    cin >> command >> arg;
    cout << list.find(arg) << endl;

    for (int i = 1; i < Q; ++i)
    {
        cin >> command;
        if (command == "next")
        {
            cout << list.next() << endl;
        }
        else if (command == "prev")
        {
            cout << list.prev() << endl;
        }
        else if (command == "visit")
        {
            cin >> arg;
            cout << list.find(arg) << endl;
        }
    }

    return 0;
}