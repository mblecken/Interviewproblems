
#include <iostream>
#include <map>
using namespace std;





int main(){

    map<char,int>romanmap;
    //map<int,char>romanmap;
    romanmap = { {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000} };
    //romanmap = { {1,'I'}, {5,'V'}, {10,'X'}, {50,'L'}, {100, 'C'}, {500,'D'}, {1000,'M'} };
    //romanmap = { {"I", 1}, {"V", 5}, {"X", 10}, {"L", 50}, {"C", 100}, {"D", 500}, {"M", 1000} };
    string input;
    cout << "Input roman numeral to be converted: ";
    cin >> input;
    int number;
    for(int i=0; i<input.length(); i++){
        auto num = romanmap.find(input[i]);
        number += num->second;


        // for(int j=0; j<romanmap.size();j++){
        //     if()
        // }
    }
    cout << "Integer is: " << number;
}