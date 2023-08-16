//Find the GCD (Greatest Common Divisor) of 2 integers. 
//The GCD of any 2 numbers is the largest number that divides both the integers.

#include <iostream>
using namespace std;

int main(){

    int n1, n2;
    cout<<"Enter num 1 = ";
    cin>>n1;
    cout<<"Enter num 2 = ";
    cin>>n2;

    //Limit
    int n;
    if(n1<=n2){
        n = n1;
    }else{
        n = n2;
    }

    //Calc
    int d=1;
    for(int i = 2; i<=n; i++){ //<= used because in few cases like 5 & 10

        if(n1%i==0 && n2%i==0){

            d = i;

        }

    }

    cout<<d<<endl;

    return 0;
}
