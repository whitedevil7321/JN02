#include <iostream>
#include <queue>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int d) {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* builtTree(Node* root) {
    cout << "Enter Data:" << endl;
    int data;
    cin >> data;

    root = new Node(data);
    if (data == -1) {
        return NULL;
    }

    cout << "Enter The data to be entered into the left branch " << data << endl;
    root->left = builtTree(root->left);

    cout << "Enter The data to be entered into the right branch " << data << endl;
    root->right = builtTree(root->right);
    return root;
}

void levelordertraversal(Node* root) {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if (temp == NULL) {
            cout << endl;
            if (!q.empty()) {
                q.push(NULL);
            }
        } else {
            cout << temp->data << " ";
            if (temp->left) {
                q.push(temp->left);
            }
            if (temp->right) {
                q.push(temp->right);
            }
        }
    }
}


void inorder(Node* root){
     if(root==NULL){
         return;
         
         
     }
     
     inorder(root->left);
     cout<<root->data<<" ";
     inorder(root->right);
     
     
}

void preorder(Node* root){
    if(root==NULL){
        return;
    }
    
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}


void postorder(Node* root){
    if(root==NULL){
        return;
        
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
    

    
}
int main() {
    Node* root = NULL;
    root = builtTree(root);
cout<<"Level Order traversal"<<endl;
//1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    levelordertraversal(root);
    
    cout<<"inorder traversal:"<<endl;
    inorder(root);
    cout<<endl;
    
    cout<<"Preorder traversal"<<endl;
    preorder(root);
    
    
     cout<<endl;
    cout<<"Postorder traversal"<<endl;
    postorder(root);
    return 0;
}
