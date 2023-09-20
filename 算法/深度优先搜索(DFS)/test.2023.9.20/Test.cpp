

//226. 翻转二叉树
//#include<bits/stdc++.h>
//using namespace std;
// struct TreeNode 
// {
//      int val;
//      TreeNode *left;
//      TreeNode *right;
//      TreeNode() : val(0), left(nullptr), right(nullptr) {}
//      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  };
// 
//class Solution {
//public:
//    void _invertTree(TreeNode* root)
//    {
//        if (root == nullptr)
//        {
//            return;
//        }
//        TreeNode* leftchild = root->left;
//        TreeNode* rightchild = root->right;
//        root->left = rightchild;
//        root->right = leftchild;
//        _invertTree(root->left);
//        _invertTree(root->right);
//    }
//    TreeNode* invertTree(TreeNode* root)
//    {
//        if (root == nullptr)
//        {
//            return nullptr;
//        }
//        _invertTree(root);
//        return root;
//    }
//};
//int main()
//{
//    TreeNode node1(1);
//    TreeNode node1leftchild(2);
//    //TreeNode node1rightchild(3);
//    node1.left = &node1leftchild;
//    //node1.right = &node1rightchild;
//    Solution s;
//    s.invertTree(&node1);
//    return 0;
//}

//695.岛屿的最大面积
//#include<bits/stdc++.h>
//using namespace std;
//class Solution 
//{
//public:
//    int dfs(vector<vector<int>>& grid, int row, int col)
//    {
//        if (row<0 || row>=grid.size() || col<0 || col>=grid[0].size() || grid[row][col] != 1)
//        {
//            return 0;
//        }
//        grid[row][col] = 2;
//
//        return 1 + 
//            dfs(grid, row - 1, col) + 
//            dfs(grid, row + 1, col) + 
//            dfs(grid, row, col + 1) + 
//            dfs(grid, row, col - 1);
//    }
//    int maxAreaOfIsland(vector<vector<int>>& grid)
//    {
//        int area = 0;
//        for (int i = 0; i < grid.size(); i++)
//        {
//            for (int j = 0; j < grid[i].size(); j++)
//            {
//                area = max(area, dfs(grid, i, j));
//            }
//        }
//        return area;
//    }
//};
//int main()
//{
//    Solution s;
//    vector<vector<int>> grid = {
//        {0,0,1,0,0,0,0,1,0,0,0,0,0},
//        {0,0,0,0,0,0,0,1,1,1,0,0,0},
//        {0,1,1,0,1,0,0,0,0,0,0,0,0},
//        {0,1,0,0,1,1,0,0,1,0,1,0,0},
//        {0,1,0,0,1,1,0,0,1,1,1,0,0},
//        {0,0,0,0,0,0,0,0,0,0,1,0,0},
//        {0,0,0,0,0,0,0,1,1,1,0,0,0},
//        {0,0,0,0,0,0,0,1,1,0,0,0,0} };
//    cout<<s.maxAreaOfIsland(grid);
//    return 0;
//}

//LCR 116.省份数量
//#include<bits/stdc++.h>
//using namespace std;
//class Solution 
//{
//public:
//    void dfs(vector<vector<int>>& isConnected, vector<bool>& visited, int i)
//    {
//        for (int j = 0; j < isConnected.size(); j++)
//        {
//            if (visited[j] == false && isConnected[i][j] == 1)
//            {
//                visited[j] = true;
//                dfs(isConnected, visited, j);
//            }
//        }
//    }
//    int findCircleNum(vector<vector<int>>& isConnected)
//    {
//        vector<bool> visited;
//        int ret = 0;
//        visited.resize(isConnected.size(), false);
//        for (int i = 0; i < isConnected.size(); i++)
//        {
//            if (visited[i] == false)
//            {
//                dfs(isConnected, visited, i);
//                ret++;
//            }
//        }
//        return ret;
//    }
//};
//int main()
//{
//    vector<vector<int>> isConnected{
//        {1,1,0},
//        {1,1,0},
//        {0,0,1}
//    };
//    Solution s;
//    cout<<s.findCircleNum(isConnected);
//    return 0;
//}