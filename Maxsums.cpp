

#include <iostream>

using namespace std;


void insertsort(int * arr, int n){
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
 
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}


void Findmaxsums(int * A, int * B, int N){

    insertsort(A,N);
    insertsort(B,N);
    int maxsum = 0;
    //cout << " sorted arrays are: for A:  " << A[0] << A[1] << A[2] << " sorted arrays are: for B:  " << B[0] << B[1] << B[2] << endl;
    for(int i=0; i < N; i++){
        maxsum += (A[i] * B[i]);
    }

    cout << "Maxsum is: " << maxsum << endl;
  
}


int main(){
    
    int N = 5;
    int A[] = {5,1,3,4,2};
    int B[] = {8,10,9,7,6};
    //cout << "B[0] is: " << B[0] << endl;
    Findmaxsums(A,B,N);
    //cout << "B[0] is: " << B[0] << endl;

    
}