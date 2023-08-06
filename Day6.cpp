//Given an unsorted array of N integers, find smallest and largest element in optimal way.

#include <iostream>
using namespace std;

int main(){

    cout<<"Enter array size =";
    int size;
    cin>>size;

    cout<<"Enter elements:";
    int i, arr[size];
    for(i = 0; i<size; i ++){

        cin>>arr[i];

    }

    //Let
    int small = arr[0], large = arr[0];

    for(i = 0; i<size; i++){

        //Check small
        if(arr[i] < small){

            small = arr[i];

        }

        //Check big
        if(arr[i] > large){

            large = arr[i];

        }

    }

    //Output
    cout<<"Smallest: "<<small<<", Largest: "<<large;

    return 0;
}
