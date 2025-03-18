// same or not 1

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int N, M;
//     cin >> N >> M;

//     stack<int> st;
//     queue<int> q;

//     for (int i = 0; i < N; ++i)
//     {
//         int value;
//         cin >> value;
//         st.push(value);
//     }

//     for (int i = 0; i < M; ++i)
//     {
//         int value;
//         cin >> value;
//         q.push(value);
//     }

//     if (N != M)
//     {
//         cout << "NO" << endl;
//         return 0;
//     }

//     while (!st.empty() && !q.empty())
//     {
//         if (st.top() != q.front())
//         {
//             cout << "NO" << endl;
//             return 0;
//         }
//         st.pop();
//         q.pop();
//     }

//     cout << "YES" << endl;
//     return 0;
// }











// same or not 2

#include <bits/stdc++.h>
using namespace std;


class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val)
    {
        sz++;
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }

    void pop()
    {
        sz--;
        Node *deleteNode = tail;
        tail = tail->prev;
        if (tail == NULL)
        {
            head = NULL;
        }
        else
        {
            tail->next = NULL;
        }
        delete deleteNode;
    }

    int top()
    {
        return tail->val;
    }

    int size()
    {
        return sz;
    }

    bool empty()
    {
        return (sz == 0);
    }
};


class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val)
    {
        sz++;
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }

    void pop()
    {
        sz--;
        Node *deleteNode = head;
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
        }
        else
        {
            head->prev = NULL;
        }
        delete deleteNode;
    }

    int front()
    {
        return head->val;
    }

    int size()
    {
        return sz;
    }

    bool empty()
    {
        return (sz == 0);
    }
};



int main()
{
    int N, M;
    cin >> N >> M;

    myStack st;
    myQueue q;


    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }


    for (int i = 0; i < M; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }


    if (st.size() != q.size())
    {
        cout << "NO" << endl;
        return 0;
    }


    bool isSame = true;
    while (!st.empty() && !q.empty())
    {
        int stackVal = st.top();
        int queueVal = q.front();
        if (stackVal != queueVal)
        {
            isSame = false;
            break;
        }
        st.pop();
        q.pop();
    }

    if (isSame == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}












// Is Valid

// #include <bits/stdc++.h>
// using namespace std;

// bool isValid(string s)
// {
//     stack<char> st;
//     for (char c : s)
//     {
//         if (!st.empty() && ((st.top() == '0' && c == '1') || (st.top() == '1' && c == '0')))
//         {
//             st.pop();
//         }
//         else
//         {
//             st.push(c);
//         }
//     }
//     return st.empty();
// }

// int main()
// {
//     int T;
//     cin >> T;
//     while (T != 0)
//     {
//         string s;
//         cin >> s;
//         if (isValid(s))
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//         T--;
//     }
//     return 0;
// }









// Special Queries

// #include <bits/stdc++.h>
// using namespace std;

// int main() 
// {
//     int q; 
//     cin >> q;

//     queue<string> line;

//     while (q--) 
//     {
//         int a;
//         cin >> a;

//         if (a == 0) 
//         {
//             string name;
//             cin >> name;
//             line.push(name);
//         } 
//         else if (a == 1) 
//         {
          
//             if (!line.empty()) 
//             {
//                 cout << line.front() << endl; 
//                 line.pop();             
//             } 
//             else
//             {
//                 cout << "Invalid" << endl;
//             }
//         }
//     }

//     return 0;
// }









// Elimination

// #include <bits/stdc++.h>
// using namespace std;

// bool empty(string s) 
// {
//     stack<char> st;

//     for (char c : s) 
//     {
//         if (!st.empty() && ((st.top() == '0' && c == '1'))) 
//         {
//             st.pop();
//         } 
//         else 
//         {
//             st.push(c);
//         }
//     }

//     return st.empty();
// }

// int main() 
// {
//     int t;
//     cin >> t;

//     while (t != 0) 
//     {
//         string s;
//         cin >> s;

//         if (empty(s)) 
//         {
//             cout << "YES" << endl;
//         } 
//         else 
//         {
//             cout << "NO" << endl;
//         }
//         t--;
//     }

//     return 0;
// }
