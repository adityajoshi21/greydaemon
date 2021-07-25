Next Larger node:
Given a generic tree and an integer n. Find and return the node with next larger element in the Tree i.e. find a node with value just greater than n.
Return NULL if no node is present with the value greater than n.
  
  /************************************************************
 
    Following is the structure for the TreeNode class

    template <typename T>
    class TreeNode {
     public:
        T data;
        vector<TreeNode<T>*> children;
    
        TreeNode(T data) {
            this->data = data;
        }
    
        ~TreeNode() {
            for (int i = 0; i < children.size(); i++) {
                delete children[i];
            }
        }
    };

************************************************************/
#include<queue>
#include<climits>
TreeNode<int>* getNextLargerElement(TreeNode<int>* root, int x) {
    // Write your code here
    if(root->children.size()==0){
       if(root->data>x)
        return root;
    }
queue<TreeNode<int>*> q;
    q.push(root);
    TreeNode<int>*ans= root;
    int difference=INT_MAX;
    
    
    while(q.size()!=0){
       TreeNode<int>* temp= q.front();
        q.pop();
        if(temp->data-x<difference && temp->data>x){
            difference=temp->data-x;
            ans=temp;
       }
        
        for(int i=0; i<temp->children.size();i++)
        {
            q.push(temp->children[i]);
            
        }
        
    }
    if(ans==root)
        return NULL;
    else
        return ans;
}
