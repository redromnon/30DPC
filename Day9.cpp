//Reverse a string using recursion

#include <iostream>
using namespace std;

void reverse(string s, int i, string rev){

    if(i >= 0){

        reverse(s, i-1, rev+s[i]);

    }else{
        cout<<rev;
    }

}

int main(){

    string s = "HELLO123";
    string rev = "";

    reverse(s, s.length()-1, rev);

    return 0;
}
