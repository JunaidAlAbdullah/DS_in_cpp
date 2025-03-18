// order of NlogN

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j*=2)
        {
            cout << "Hello" << endl;
        }
    }

    return 0;
}