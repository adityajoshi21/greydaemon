Structurally identical
Given two Generic trees, return true if they are structurally identical i.e. they are made of nodes with the same values arranged in the same way.
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

bool areIdentical(TreeNode<int> *root1, TreeNode<int> * root2) {
    // Write your code here
    if(root1==NULL|| root2 ==NULL){
        return 0;
    }
     if(root1 == NULL && root2 == NULL) {
        return true;
    }
    if(root1->children.size()!=root2->children.size()){
        return false;
    }
    int i=0;
    while(i<root2->children.size())
    {
    if(areIdentical(root1->children[i],  root2->children[i])
    ) {   
       i++; }
        else
            return false;
    }
        
    return true;
}
