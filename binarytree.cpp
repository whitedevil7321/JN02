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

int main() {
    Node* root = NULL;
    root = builtTree(root);

    levelordertraversal(root);
    return 0;
}
