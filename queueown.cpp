/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;



class Stackexample{
    public:
    static const int arraysize=10;
    int front=-1;
    int array[arraysize];
    int rear=-1;
    int isFull(){
        if(rear>=arraysize){
            return 1;
        }
        else{
            return 0;
        }
    }
    void insert(int element){
        if(isFull()!=1){
            rear+=1;
            array[rear]=element;
        }
        else{
            cout<<"queue is Full";
        }
    }
    int isEmpty(){
        if(rear==-1){
            return 1;
        }
        else{
            return 0;
        }
    }
    void removed(){
       for(int i=0;i<=rear;i++){
           array[i]=array[i+1];
       }
       rear-=1;
    }
    void displayfront(){
        for(int j=0;j<=rear;j++)
        cout<<array[j]<<"->";
        
    }
    
};
int main()
{
    Stackexample st;
    st.insert(10);
    st.insert(20);
    st.insert(30);
    st.insert(40);
   
    st.displayfront();
    cout<<endl;
    
    st.removed();
    st.removed();
    st.displayfront();

    return 0;
}
