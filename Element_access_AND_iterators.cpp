#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {10,20,40,20,60,10,50,70,60,30};

    cout << l.back() << endl;  // printing tail
    cout << l.front() << endl; // printing head
    cout << *next(l.begin() , 2);  // printing any element
    return 0;
}