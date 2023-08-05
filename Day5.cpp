//Given an array of N integers, and an integer K, 
//the task is to find the number of pairs of integers in the array whose sum is equal to K.

#include <iostream>
using namespace std;

int main(){

    int size, K, pairs = 0;
    cout<<"Input array size = ";
    cin>>size;

    int arr[size];
    for(int i = 0; i<size; i++){

        cin>>arr[i];

    }
    cout<<"\nInput sum value = ";
    cin>>K;

    //Find pairs
    for(int i = 0; i<6; i++){

        for(int j = i+1; j<6; j++){

            if(arr[i]+arr[j]==K){
                pairs = pairs + 1;

            }

        }

    }

    cout<<"Pairs = "<<pairs;

    return 0;
}
