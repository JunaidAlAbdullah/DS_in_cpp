// Running Sum of an Array

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     vector<long long int> v(n);

//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }

//     vector<long long int> pre(n);
//     pre[0] = v[0];

//     for (int i = 1; i < n; i++)
//     {
//         pre[i] = pre[i-1] + v[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << pre[i] << " ";
//     }

//     return 0;
// }

// Equilibrium Index
// An equilibrium index is an index such that the sum of elements at lower indexes is equal to the sum of elements at higher indexes.











#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }

    int totalSum = 0;
    for (int i = 0; i < n; ++i)
    {
        totalSum += nums[i];
    }

    int leftSum = 0;

    for (int i = 0; i < n; ++i)
    {
        int rightSum = totalSum - leftSum - nums[i];
        if (leftSum == rightSum)
        {
            cout << i << endl;
            return 0;
        }
        leftSum += nums[i];
    }

    cout << -1 << endl;
    return 0;
}
