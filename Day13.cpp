//Given a Roman numeral, the task is to find its corresponding decimal value.
#include <iostream>
using namespace std;

int main(){

    string s;
    cout<<"Enter roman numeral:";
    cin>>s;

    int num = 0;

    for(int i = 0; i < s.length(); i++){

        if(s[i] == 'I'){

            num++;

        }

        if(s[i] == 'V'){

            if(s[i-1] == 'I'){

                num+=3;

            }else{
                num+=5;
            }

        } 

        if(s[i] == 'X'){

            if(s[i-1] == 'I'){

                num+=8;

            }else{
                num+=10;
            }

        }    

        if(s[i] == 'L'){

            if(s[i-1] == 'X'){

                num+=30;

            }else{
                num+=50;
            }

        }   

        if(s[i] == 'C'){

            if(s[i-1] == 'X'){

                num+=80;

            }else{
                num+=100;
            }

        }   

    }

    cout<<num;

    return 0;
}
