//You're given a string S,  consisting of "{", "}", "(", ")", "[" and "]". 
//Return true is S is balanced, else return false.
#include <iostream>
using namespace std;

class Stack {

    public:
        char arr[100];
        int top;

        Stack(){
            top = -1;
        }

        void push(char c){

            top = top + 1;
            arr[top] = c;

        }

        void pop(){

            top = top - 1;

        }

};

int main(){

    Stack stack;
    
    string p = "[()]{}{[()()]()}";

    bool isValid = true;

    for(int i = 0; i<p.length(); i++){

        if(p[i] == '{' || p[i] == '(' || p[i] == '['){

            stack.push(p[i]);

            cout<<stack.arr[stack.top];

        }else if(p[i] == '}' && stack.arr[stack.top] == '{' || 
            p[i] == ']' && stack.arr[stack.top] == '[' ||
            p[i] == ')' && stack.arr[stack.top] == '('){

                stack.pop();
                cout<<stack.arr[stack.top];

        }

    }

    //Display if valid s
    if(stack.top == -1){ //Top will be -1 if all brackets are nullified

        cout<<"true";

    }else{

        cout<<"false";

    }


    return 0;
}
