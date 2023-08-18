//You are given two positive numbers N and M. 
//You have to return the Nth root of M. If the Nth root of M is not an integer, return -1.

#include <iostream>
using namespace std;

int main(){

    int m, n;
    cin>>m;
    cin>>n;

    int power = 1;
    int res = m;
    
    while(n > res){

        res = res * m;
        power++;

    }

    if(res == n){
        cout<<power;
    }else{
        cout<<-1;
    }

    return 0;
}
