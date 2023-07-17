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
    int array[arraysize];
    int top=-1;
    int isFull(){
        if(top>=arraysize){
            return 1;
        }
        else{
            return 0;
        }
    }
    void push(int element){
        if(isFull()!=1){
            top+=1;
            array[top]=element;
        }
        else{
            cout<<"Array is Full";
        }
    }
    int isEmpty(){
        if(top==-1){
            return 1;
        }
        else{
            return 0;
        }
    }
    void pop(){
        if(isEmpty()!=1){
            top-=1;
            
        }
    }
    void displayTop(){
        cout<<array[top];
    }
    
};
int main()
{
    Stackexample st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.pop();
    st.pop();
    st.displayTop();

    return 0;
}
