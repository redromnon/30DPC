//Given a number N, figure out if it is a member of the fibonacci series or not. 
//Return true if the number of members of the fibonacci series else false.

#include <iostream>
using namespace std;

void fibo(int n1, int n2, int n){

    if(n2<n){

        fibo(n2, n1+n2, n);

    }else if (n2 == n){
        
        cout<<"True";

    }else{

        cout<<"False";

    }
    

}

int main(){
    
    int n = 11;
    fibo(0,1,n);

    return 0;
}
