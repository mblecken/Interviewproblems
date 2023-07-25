
#include "string.h"
#include <iostream>

using namespace std;

void mergeArrays(int * firstarray, int * secondarray){
    int firstarraylength = sizeof(firstarray)/sizeof(int);
    //cout << "first array length is: " << firstarraylength << endl;
    int tempsize = (firstarraylength * 2);
    int temp[tempsize];
    int index = 0;
    for(int i=0; i<firstarraylength; i++){
        for(int h=0; h<firstarraylength; h++){
            if((firstarray[i] < secondarray[h]) || (firstarray[i] == secondarray[h])){
            temp[index] = firstarray[h];
            index++;
            break;
        }
        else if((secondarray[h] < firstarray[i])){
            temp[index] = secondarray[h];
            index++;
            
        //cout << "element of firstarray[i] is: " << firstarray[i] << endl << "element of secondarray[i] is: " << secondarray[i] << endl;
        // if((firstarray[i] < secondarray[i]) || (firstarray[i] == secondarray[i])){
        //     temp[index] = firstarray[i];
        //     //cout << "temp array at index point " << index << " is " << temp[index] << endl;
        //     temp[index+1] = secondarray[i];
        //     //cout << "temp array at index point " << index+1 << " is " << temp[index+1] << endl;
        //     index += 2;    
        // }
        // else {
        //     temp[index] = secondarray[i];
        //     //cout << "temp array at index point " << index << " is " << temp[index] << endl;
        //     temp[index+1] = firstarray[i]; 
        //     //cout << "temp array at index point " << index+1 << " is " << temp[index+1] << endl;
        //     index += 2;
        // }

        }
    }
        cout << "The merged array consists of: ";

        for(int j=0; j<tempsize; j++){
            cout << temp[j] << " ";
        }
    
    }
}   


int main(){

    int arr1[4]= {};
    int arr2[4]= {};

    cout << "Input values for first array of size 4: ";
    for(int i=0; i<4; i++){
       cin >> arr1[i]; 
    }

    cout << "Input values for second array of size 4: ";
    for(int i=0; i<4; i++){
       cin >> arr2[i]; 
    }
   
    mergeArrays(arr1, arr2);

}



// Given two sorted arrays, the task is to merge them in a sorted manner.
// Examples:

// Input: arr1[] = { 1, 3, 4, 5}, arr2[] = {2, 4, 6, 8}
// Output: arr3[] = {1, 2, 3, 4, 4, 5, 6, 8}

// Input: arr1[] = { 5, 8, 9}, arr2[] = {4, 7, 8}
// Output: arr3[] = {4, 5, 7, 8, 8, 9} 