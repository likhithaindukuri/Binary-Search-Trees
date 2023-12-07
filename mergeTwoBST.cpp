class Solution
{
    void inorder(Node* root,vector<int> &vc)
    {
        if(!root)
        {
            return;
        }
        inorder(root->left,vc);
        vc.push_back(root->data);
        inorder(root->right,vc);
    }
    public:
    //Function to return a list of integers denoting the node 
    //values of both the BST in a sorted order.
    vector<int> merge(Node *root1, Node *root2)
    {
       vector<int> t1;
       vector<int> t2;
       vector<int> ans;
       
       inorder(root1,t1);
       inorder(root2,t2);
       int p1=0,p2=0;
       t1.push_back(INT_MAX);
       t2.push_back(INT_MAX);
       while(p1<t1.size()-1 || p2<t2.size()-1)
       {
           if(t1[p1]<t2[p2])
           {
               ans.push_back(t1[p1]);
               p1++;
           }
           else
           {
               ans.push_back(t2[p2]);
               p2++;
           }
       }
       return ans;
    }
};