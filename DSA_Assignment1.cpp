// Duplicate

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     vector<int>v(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }
    
//     int flag = 0;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             if (v[i] == v[j])
//             {
//                 flag = 1;
//                 break;
//             }
//         }
//         if (flag == 1)
//         {
//             break;
//         }
//     }
    
//     if (flag == 1)
//     {
//         cout << "YES";
//     }
//     else
//     {
//         cout << "NO";
//     }
    

//     return 0;
// }









// Get Prefix Sum


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
    
    
//     vector<long long int> rev(n);
//     rev = pre;

//     for (int i = 0; i < n; i++)
//     {
//        rev[i] = pre[n-i-1];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << rev[i] << " ";
//     }

//     return 0;
// }









// Sorted

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
    

//    for (int i = 0; i < t; i++)
//    {

//         int n;
//         cin >> n;

//         vector<int> a(n);

//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }

//         int flag = 1;

//         for (int i = 1; i < n; i++)
//         {
//             if (a[i] < a[i-1])
//             {
//                 flag = 0;
//             }
//         }
        
//         if (flag == 1)
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
        
//    }

//     return 0;
// }









// Insert it



// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n,m,x;

//     cin >> n;

//     vector<int> v(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }
    
//     cin >> m;

//     vector<int> v2(m);
//     for (int i = 0; i < m; i++)
//     {
//         cin >> v2[i];
//     }
    
//     cin >> x;

//     v.insert(v.begin()+x , v2.begin(), v2.end());

//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << " ";
//     }
    

//     return 0;
// }









// Printing X

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                if (i == n / 2)
                    cout << "X";
                else
                    cout << "\\"; 
            }
            else if (j == n - i - 1)
            {
                cout << "/";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}