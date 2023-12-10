class Solution{

public:
    int floor(Node* root, int x) {
         int floor = -1; 
    while (root) {
 
        if (root->data== x) {
            floor = root->data;
            return floor;
        }
 
        if (x > root->data) {
            floor = root->data;
            root = root->right;
        }
        else {
            root = root->left;
        }
    }
    return floor;
    }
};