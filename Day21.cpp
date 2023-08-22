//Given a stack with push(), pop(), and empty() operations.
//The task is to delete the middle element of it without using any additional data structure.

#include <iostream>
using namespace std;

const int MAX = 100; 

class Stack{

    int arr[MAX];

    public:
        int top;

        Stack(){

            top = -1;

        }

        void push(int value){

            top++;
            arr[top] = value;

        }

        int pop(){

            int val = arr[top];
            top--;
            return val;
        }

        bool empty(){

            if(top == -1){
                return true;
            }else{
                return false;
            }
        }

        void display(){

            for(int i = 0; i<=top; i++){

                cout<<arr[i]<<" ";
            }

        }

};

int main(){

    Stack stack, temp;

    int n, v, i;
    cout<<"Enter no. of values = ";
    cin>>n;

    for(i = 0; i<n; i++){

        cin>>v;
        stack.push(v);

    }

    cout<<"Given stack = ";
    stack.display();

    int m;
    int mid = n / 2;
    for(i = 0; i<mid; i++){

        temp.push(stack.pop());

    }

    m = stack.pop();
    cout<<endl<<"Removed middle element "<<m<<endl;

    //Push back other values
    while(!temp.empty()){

        stack.push(temp.pop());        

    }
     
    stack.display();

}
