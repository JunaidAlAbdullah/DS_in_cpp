// Question: Take two stacks of size N and M as input and check if both of them are the same or not. Don’t use STL to solve this problem.

// #include <bits/stdc++.h>
// using namespace std;

// // Function to check if two stacks are the same
// bool areStacksEqual(int stack1[], int n, int stack2[], int m)
// {
//     if (n != m)
//     {
//         return false; // If sizes are different, stacks are not equal
//     }

//     for (int i = 0; i < n; i++)
//     {
//         if (stack1[i] != stack2[i])
//         {
//             return false; // If any element is different, stacks are not equal
//         }
//     }

//     return true; // Stacks are equal
// }

// int main()
// {
//     int n, m;

//     // Input size and elements of the first stack
//     cin >> n;
//     int stack1[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> stack1[i];
//     }

//     // Input size and elements of the second stack
//     cin >> m;
//     int stack2[m];
//     for (int i = 0; i < m; i++)
//     {
//         cin >> stack2[i];
//     }

//     // Check if the stacks are equal and output the result
//     if (areStacksEqual(stack1, n, stack2, m) == true)
//     {
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }

//     return 0;
// }












// Question: Take a stack of size N and a queue of size M as input. Then check if both of them are the same or not in the order of removing. You should use STL to solve this problem.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;

    cin >> n;

    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.push(x);
    }

    cin >> m;

    queue<int> q;

    for (int i = 0; i < m; i++)
    {
        int y;
        cin >> y;
        q.push(y);
    }

    int flag = 0;

    while (!s.empty())
    {
        if (s.size() != q.size())
        {
            cout << "NO" << endl;
            return 0;
        }

        else if (s.top() != q.front())
        {
            cout << "NO" << endl;
            return 0;
        }
        else
        {
            flag = 1;
        }

        s.pop();
        q.pop();
    }

    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}





// Question: Take a stack of size N as input and copy those elements to another stack to get the values in the order they were inserted and print them. You should use STL to solve this problem.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;

    cin >> n;

    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.push(x);
    }

    cin >> m;

    queue<int> q;

    for (int i = 0; i < m; i++)
    {
        int y;
        cin >> y;
        q.push(y);
    }

    int flag = 0;

    while (!s.empty())
    {
        if (s.size() != q.size())
        {
            cout << "NO" << endl;
            return 0;
        }

        else if (s.top() != q.front())
        {
            cout << "NO" << endl;
            return 0;
        }
        else
        {
            flag = 1;
        }

        s.pop();
        q.pop();
    }

    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}