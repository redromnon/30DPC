//Given a string, find the first non-repeated character in it. 
//If no such character exists, return a specific value
#include <iostream>
using namespace std;

int main(){

    cout<<"Enter string = ";
    string s;
    cin>>s;

    bool repeat;

    char c = '$';

    for(int i = 0; i < s.length(); i++){

        //Assume
        repeat = false;

        for(int j = 0; j < s.length(); j++){

            if(i != j && s[i] == s[j]){

                repeat = true;
                break;

            }

        }

        //Found first non-repeating char, so exit the loop
        if(!repeat){

            c = s[i];
            break;

        }

    }

    cout<<c;

    return 0;
}
