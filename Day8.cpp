//How do you check if two strings are anagrams of each other?

#include <iostream>
using namespace std;

int main(){

    string s1, s2;
    cout<<"Checking Anagram...\n";
    cout<<"Enter string1 = ";
    cin>>s1;
    cout<<"Enter string2 = ";
    cin>>s2;

    int size1 = s1.size();
    int size2 = s2.size();

    if(size1 == size2){

        bool isThere;
        //Check if a letter exists in both
        for(int i = 0; i<size1; i++){

            isThere = false;

            for(int j = 0; j<size2; j++){

                if(s1[i] == s2[j]){

                    isThere = true;
                    break;

                }

            }

            if(!isThere){

                cout<<"False";
                break;

            }

        }

        if(isThere){
            cout<<"True";
        }
    }else{
        cout<<"False";
    }

    return 0;
}
