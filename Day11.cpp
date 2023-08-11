//Reverse given string word by word
#include <iostream>
using namespace std;

int main(){

    string s = "I love programming";
    string substring = "";
    string rev = "";

    for(int i = 0; i<=s.length(); i++){ //i<=s.length() because we need to include the last letter

        if(s[i] == ' ' || i == s.length()){

            for(int j = substring.length()-1; j>=0; j--){

                rev+=substring[j];

            }

            if(i != s.length()){
                rev+=' ';
            }

            substring = "";

        }else{

            substring+=s[i];

        }

    }

    //Display
    //cout<<rev<<endl;
    for(int i = rev.length()-1; i>=0; i--){

        cout<<rev[i];

    }

    return 0;
}
