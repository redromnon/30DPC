//Given a sorted array arr[] and a number x,
//Write a func that counts the occurences of x in arr[]

#include <iostream>
using namespace std;

int main(){

    cout<<"Enter size of array =";
    int size, i;
    cin>>size;

    cout<<"Enter elements in sorted order and repeat any elements\n";
    int arr[size];
    for(i =0; i<size; i++){

        cout<<"Element "<<i+1<<" = ";
        cin>>arr[i];

    }

    cout<<"\nEnter element you wish to find the occurence of = ";
    int x;
    cin>>x;

    //Calc freq/occu
    int occ = 0;
    for(i = 0; i<size; i++){

        if(arr[i] == x){

            occ = occ + 1;

        }

    }

    cout<<"Total no. of occurence of "<<x<<" is "<<occ<<"\n";
    
    return 0;
}
