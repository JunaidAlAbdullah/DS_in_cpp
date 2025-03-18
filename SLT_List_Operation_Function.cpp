#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {10,20,40,20,60,10,50,70,60,30};
    


    // remove a element
    l.remove(10);

    for (int val : l)
    {
        cout << val << " ";
    }
    
    cout << endl;

    // sorting

    // l.sort(); // Assending

    l.sort(greater<int>());  //Discending

    for (int val : l)
    {
        cout << val << " ";
    }
    cout << endl;

    // Removing Duplicate (LL must have to be sorted)
 
    l.unique();
    for (int val : l)
    {
        cout << val << " ";
    }
    cout << endl;



    // reversing LL

    l.reverse();
    for (int val : l)
    {
        cout << val << " ";
    }
    cout << endl;


    return 0;
}