// Sum without Leaf

// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *left;
//     Node *right;
//     Node(int val)
//     {
//         this->val = val;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };

// Node* input_tree()
// {
//     int val;
//     cin >> val;

//     Node *root;
//     if (val == -1)
//     {
//         root = NULL;
//     }
//     else
//     {
//         root = new Node(val);
//     }

//     queue<Node *> q;
//     if (root != NULL)
//     {
//         q.push(root);
//     }
    
//     while (!q.empty())
//     {
//         Node *p = q.front();
//         q.pop();

//         int l, r;
//         cin >> l >> r;

//         Node *myLeft, *myRight;
//         if (l == -1)
//         {
//             myLeft = NULL;
//         }
//         else
//         {
//             myLeft = new Node(l);
//         }

//         if (r == -1)
//         {
//             myRight = NULL;
//         }
//         else
//         {
//             myRight = new Node(r);
//         }

//         p->left = myLeft;
//         p->right = myRight;

//         if (p->left != NULL)
//         {
//             q.push(p->left);
//         }

//         if (p->right != NULL)
//         {
//             q.push(p->right);
//         }
//     }
//     return root;
// }

// int sumWithoutLeafNodes(Node *root)
// {
//     if (root == NULL) 
//     {
//         return 0;
//     }

//     queue<Node *> q;
//     q.push(root);

//     int sum = 0;

//     while (!q.empty())
//     {
//         Node *p = q.front();
//         q.pop();

//         if (p->left != NULL || p->right != NULL)
//         {
//             sum += p->val;
//         }

//         if (p->left != NULL)
//         {
//             q.push(p->left);
//         }

//         if (p->right != NULL)
//         {
//             q.push(p->right);
//         }
//     }

//     return sum;
// }

// int main()
// {
//     Node* root = input_tree();

//     int result = sumWithoutLeafNodes(root);
//     cout << result << endl;

//     return 0;
// }




// Leaf


// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *left;
//     Node *right;
//     Node(int val)
//     {
//         this->val = val;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };

// Node* input_tree()
// {
//     int val;
//     cin >> val;

//     Node *root;
//     if (val == -1)
//     {
//         root = NULL;
//     }
//     else
//     {
//         root = new Node(val);
//     }

//     queue<Node *> q;
//     if (root != NULL)
//     {
//         q.push(root);
//     }
    
//     while (!q.empty())
//     {
//         Node *p = q.front();
//         q.pop();

//         int l, r;
//         cin >> l >> r;

//         Node *myLeft, *myRight;
//         if (l == -1)
//         {
//             myLeft = NULL;
//         }
//         else
//         {
//             myLeft = new Node(l);
//         }

//         if (r == -1)
//         {
//             myRight = NULL;
//         }
//         else
//         {
//             myRight = new Node(r);
//         }

//         p->left = myLeft;
//         p->right = myRight;

//         if (p->left != NULL)
//         {
//             q.push(p->left);
//         }

//         if (p->right != NULL)
//         {
//             q.push(p->right);
//         }
//     }
//     return root;
// }

// void find_leaf_nodes(Node* root, vector<int>& leaf_nodes)
// {
//     if (root == NULL) 
//     {
//         return;
//     }

//     queue<Node*> q;
//     q.push(root);

//     while (!q.empty())
//     {
//         Node* current = q.front();
//         q.pop();

       
//         if (current->left == NULL && current->right == NULL)
//         {
//             leaf_nodes.push_back(current->val);
//         }

//         if (current->left != NULL)
//         {
//             q.push(current->left);
//         }

//         if (current->right != NULL)
//         {
//             q.push(current->right);
//         }
//     }
// }

// int main()
// {
//     Node* root = input_tree();

//     vector<int> leaf_nodes;

//     find_leaf_nodes(root, leaf_nodes);

//     sort(leaf_nodes.begin(), leaf_nodes.end(), greater<int>());

//     for (int val : leaf_nodes)
//     {
//         cout << val << " ";
//     }
//     cout << endl;

//     return 0;
// }










// Perfect Binary Tree

// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *left;
//     Node *right;
//     Node(int val)
//     {
//         this->val = val;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };

// Node* input_tree()
// {
//     int val;
//     cin >> val;

//     Node *root;
//     if (val == -1)
//     {
//         root = NULL;
//     }
//     else
//     {
//         root = new Node(val);
//     }

//     queue<Node *> q;
//     if (root != NULL)
//     {
//         q.push(root);
//     }
    

//     while (!q.empty())
//     {
//         Node *p = q.front();
//         q.pop();

//         int l, r;
//         cin >> l >> r;

//         Node *myLeft, *myRight;
//         if (l == -1)
//         {
//             myLeft = NULL;
//         }
//         else
//         {
//             myLeft = new Node(l);
//         }

//         if (r == -1)
//         {
//             myRight = NULL;
//         }
//         else
//         {
//             myRight = new Node(r);
//         }

//         p->left = myLeft;
//         p->right = myRight;

//         if (p->left != NULL)
//         {
//             q.push(p->left);
//         }

//         if (p->right != NULL)
//         {
//             q.push(p->right);
//         }
//     }
//     return  root;
// }

// int count_nodes(Node* root)
// {
//     if (root == NULL)
//     {
//         return 0;
//     }
//     else
//     {
//         int l = count_nodes(root->left);
//         int r = count_nodes(root->right);
//         return l + r + 1;
//     }
// }

// int max_depth(Node* root)
// {
//     if (root == NULL)
//     {
//         return 0;
//     }
//     int left_depth = max_depth(root->left);
//     int right_depth = max_depth(root->right);
//     return max(left_depth, right_depth) + 1;
// }

// bool is_perfect_binary_tree(Node* root)
// {
//     int totalNodes = count_nodes(root);
//     int maxDepth = max_depth(root);

//     int expectedNodes = pow(2, maxDepth) - 1;

//     return totalNodes == expectedNodes;
// }

// int main()
// {
//     Node* root = input_tree();

//     if (is_perfect_binary_tree(root)  == true)
//     {
//         cout << "YES";
//     }
//     else
//     {
//         cout << "NO";
//     }

//     return 0;
// }










// Level Nodes

// #include <bits/stdc++.h>
// using namespace std;

// class Node {
// public:
//     int val;
//     Node* left;
//     Node* right;
//     Node(int val) {
//         this->val = val;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };

// Node* input_tree() 
// {
//     int val;
//     cin >> val;

//     Node* root;
//     if (val == -1) 
//     {
//         root = NULL;
//     } 
//     else 
//     {
//         root = new Node(val);
//     }

//     queue<Node*> q;
//     if (root != NULL) 
//     {
//         q.push(root);
//     }

//     while (!q.empty()) 
//     {
//         Node* p = q.front();
//         q.pop();

//         int l, r;
//         cin >> l >> r;

//        Node* myLeft;
//     if (l == -1) 
//     {
//     myLeft = NULL;
//     }
//     else
//     {
//     myLeft = new Node(l);
//     }

// Node* myRight;
// if (r == -1) {
//     myRight = NULL;
// } else {
//     myRight = new Node(r);
// }


//         p->left = myLeft;
//         p->right = myRight;

//         if (myLeft != NULL) q.push(myLeft);
//         if (myRight != NULL) q.push(myRight);
//     }

//     return root;
// }

// void print_level(Node* root, int k) {
//     if (root == NULL) {
//         cout << "Invalid" << endl;
//         return;
//     }

//     queue<Node*> q;
//     q.push(root);
//     int level = 0;

//     while (!q.empty()) 
//     {
//         int size = q.size();

//         if (level == k) {
//             for (int i = 0; i < size; i++) 
//             {
//                 Node* curr = q.front();
//                 q.pop();
//                 cout << curr->val << " ";
//             }
//             cout << endl;
//             return;
//         }

//         for (int i = 0; i < size; i++) {
//             Node* curr = q.front();
//             q.pop();

//             if (curr->left != NULL) q.push(curr->left);
//             if (curr->right != NULL) q.push(curr->right);
//         }
//         level++;
//     }

//     cout << "Invalid" << endl;
// }

// int main() {
//     Node* root = input_tree();
//     int k;
//     cin >> k;
//     print_level(root, k);
//     return 0;
// }




// Print Outer Tree
