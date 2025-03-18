// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, q;
//     cin >> n >> q;

//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//        cin >> a[i];
//     }

//     for (int i = 0; i < q; i++)
//     {
//         int x;
//         cin >> x;

//         int flag = 0;
//         for (int i = 0; i < n; i++)
//         {
//             if (a[i] == x)
//             {
//                 flag = 1;
//             }
//         }
        
//         if (flag == 1)
//         {
//             cout << "found" << endl;
//         }
//         else
//         {
//             cout << "not found" << endl;
//         }
//     }
    

//     return 0;
// }

// Time limit exceed



// new

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    int a[n];
    for (int i = 0; i < n; i++)
    {
       cin >> a[i];
    }

    sort(a,a+n);

    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
    
    int flag = 0;

    int l = 0;
    int r = n-1;

    while (l <= r)
    {
        int mid = (l+r)/2;

        if (a[mid] == x)
        {
            flag = 1;
            break;
        }
        else if (a[mid] > x)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    
        if (flag == 1)
        {
            cout << "Found\n";
        }
        else
        {
            cout << "Not Found\n";
        }
    }
    

    return 0;
}









//Binary Search concept: sorted


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//        cin >> a[i];
//     }

//     int q;
//     cin >> q;
//     int flag = 0;

//     int l = 0;
//     int r = n-1;

//     while (l <= r)
//     {
//         int mid = (l+r)/2;

//         if (a[mid] == q)
//         {
//             flag = 1;
//             break;
//         }
//         else if (a[mid] > q)
//         {
//             r = mid - 1;
//         }
//         else
//         {
//             l = mid + 1;
//         }
//     }
    
//     if (flag == 1)
//     {
//         cout << "Found";
//     }
//     else
//     {
//         cout << "Not Found";
//     }

//     return 0;
// }