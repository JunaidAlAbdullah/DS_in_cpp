// Reversing

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;

//     vector<int> v(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }

//     reverse(v.begin(),v.end());

//     for (int i = 0; i < n; i++)
//     {
//         cout << v[i] << " ";
//     }
    

//     return 0;
// }









// Replacement


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;

//     vector<int> v(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         if (v[i]>0)
//         {
//             v[i] = 1;
//         }
//         else if (v[i]<0)
//         {
//             v[i] = 2;
//         }
        
//     }
    

//     for (int i = 0; i < n; i++)
//     {
//         cout << v[i] << " ";
//     }
    

//     return 0;
// }







// Counting Elements

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;

//     vector<int> v(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }

//      auto it  = 0;
//      int count = 0;
    
//     for (int i = 0; i < n; i++)
//     {
//         auto it = find(v.begin() , v.end(), v[i]+1);
        
//         if (it == v.end())
//         {
//             count;
//         }
//         else
//         {
//             count ++;
//         }
//     }


//    cout << count; 


//     return 0;
// }









// Count Letters  SOLVE HOYNAI


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {

//     vector<char> v(26);
//     for (int i = 0; i < 26; i++)
//     {
//         cin >> v[i];
//     }

//     vector<char>v2(v);
    

//     for (int i = 'a'; i <= 'z'; i++)
//     {
//         if (v2[i] == )
//         {
//             /* code */
//         }
        
//     }
    
//     return 0;
// }






// Range Sum Query Bruteforce solution

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, q;
//     cin >> n >> q;

//     vector<int> v(n+1);

//     for (int i = 1; i <= n; i++)
//     {
//         cin >> v[i];
//     }
    
//     while (q--)
//     {
//         int l,r;
//         cin >> l >> r;

//         int sum = 0;

//         for (int i = l; i <= r; i++)
//         {
//             sum += v[i];
//         }
        
//         cout << sum << endl;
//     }
    

//     return 0;
// }









// Binary Search

#include<bits/stdc++.h>
using namespace std;

int main()
{


    return 0;
}