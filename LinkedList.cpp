/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;


class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
        
    }
};


void insertAtEnd(node* &head,int v){
    
    node* n=new node(v);
    
    if(head==NULL){
        head=n;
        return;
        
    }
    
    
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
        
    }
    temp->next=n;
    
}

void insertAtHead(node* &head,int val){
    node* n =new node(val);
    n->next=head;
    head=n;
    
    
    
}
void disply(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
        
    }
    cout<<"NULL";
    cout<<endl;
    
}
bool search(node* head,int key){
    node*temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
            
        }
    temp=temp->next;
    
    }
    return false;
    
}

void deletion(node* &head,int key){
    node* temp=head;
    while(temp->next->data!=key){
        temp=temp->next;
    }
    node* toDelete=temp->next;
    
    temp->next=temp->next->next;
}


node* reverse(node* &head){
    node* prePtr=NULL;
    node* currPtr=head;
    node* nextPtr;
    while(currPtr!=NULL){
        nextPtr=currPtr->next;
        currPtr->next=prePtr;
        
        
        
        
        prePtr=currPtr;
        currPtr=nextPtr;
        
        
    }
    return prePtr;
    
}
int main()
{node* head=NULL;

    insertAtEnd(head,1);
    insertAtEnd(head,2);
    insertAtEnd(head,3);
    insertAtEnd(head,4);
    disply(head);
    insertAtHead(head,5);
        disply(head);
       cout<<search(head,7);
       deletion(head,1);
       disply(head);
       node* newhead=reverse(head);
       disply(newhead);
        
    return 0;
    
}
