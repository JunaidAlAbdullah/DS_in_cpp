#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    vector<int> v;

    void push(int val)
    {
        v.push_back(val);
    }

    void pop()
    {
        v.pop_back();
    }

    int top()
    {
        return v.back();
    }

    int size()
    {
        return v.size();
    }

    bool empty()
    {
        return v.empty();
    }
};

int main()
{
    myStack st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << st.top() << endl;

    st.pop();

    cout << st.top() << endl;

    st.pop();

    cout << st.top() << endl;

    st.pop();

    if (st.empty() == false) // this is for checking is the stack is empty or not. If is not empty it will print a garbage value and segmantaion fault in online judge.
    {
        cout << st.top() << endl;
    }

    if (st.empty() == false) // this is for checking is the stack is empty or not. If is not empty it will print a garbage value and segmantaion fault in online judge.
    {
        st.pop();
    }

    return 0;
}