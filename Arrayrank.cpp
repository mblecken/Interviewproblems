
#include <iostream>
//#include <bits/stdc++.h>

using namespace std;

int rankElements(int * arr, int N, int K){

int rank = 1;
int pos = 1;

for(int i=0; i<N; i++){
    if(arr[i] != arr[i+1]){
        rank ++;
    }
}

}


int main(){

    int N = 4;
    int K = 3;

    int arr[4] = {100, 50, 50, 25};
    //int arr[N] doesn't work, what is the work around for this?
    //cout << arr[0];
    cout << rankElements(arr, N, K);

}