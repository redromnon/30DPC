/*
Given an array arr[] of non-negative integers and an integer sum, 
find a subarray that adds to a given sum. 
There may be more than one subarray with sum as the given sum, print first such subarray.
*/

#include <iostream>
using namespace std;

//Use brute-force and backtrack
void subarray(int arrp, int resp, int arr[], int res[], int target, int size){

    //If array pointer's value is < target
    if(arr[arrp] < target){

        //substract target from array pointer
        target = target - arr[arrp];

        //Add array pointer's value to subarray
        res[resp] = arr[arrp];

        //cout<<"\n"<<arr[arrp];
        //cout<<"\nTarget = "<<target;

        //Move to next array pointer value and next subarray index position
        subarray(arrp+1, resp+1, arr, res, target, size);

    //We need to backtrack here or undo the last step
    }else if(arr[arrp] > target){

        //Get back previous target value from the new value added to the subarray
        target = target + res[resp-1];

        //cout<<"\n"<<arr[arrp];
        //cout<<"\nTarget = "<<target;

        //Stay at same array index's value and get ready to replace that subarray value 
        subarray(arrp, resp-1, arr, res, target, size);

    //We got a match!
    }else{

        //Add array pointer's value to subarray
        res[resp] = arr[arrp];

        //Display subarray!
        cout<<"\nSubArray = ";
        for(int i = 0; i<=resp; i++){

            cout<<res[i]<<" ";

        }
    }

}


int main(){

    int arr[] = {8,7,15,6,10};
    int target = 40;
    int len = sizeof(arr)/sizeof(arr[0]);
    int res[len]; //Result subarray

    int arrp = 0; //Pointer for array value
    int resp = 0; //Pointer for subarray value

    subarray(0, 0, arr, res, target, len);

    return 0;
}
