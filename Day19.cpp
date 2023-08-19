//Given an array, print the Next Greater Element (NGE) [first greater element] for every element.
#include <iostream>
using namespace std;

int main(){

    int arr[] = {9,6,2,3,5,8};

    int len = sizeof(arr)/sizeof(arr[0]);

    int res[len];

    //Iterate each element till second-last element
    for(int i = 0; i < len-1; i++){

        //Check if greater element exists
        for(int j = i; j < len; j++){

            if(arr[j] > arr[i]){

                //cout<<arr[j]<<endl;
                res[i] = arr[j];
                break;

            }

            if(j == len-1){

                res[i] = -1;

            }

        }

    }

    //Last element is always -1
    res[len-1] = -1;

    //Display
    for(int i = 0; i < len; i++){

        cout<<res[i]<<" ";

    }

    return 0;
}
