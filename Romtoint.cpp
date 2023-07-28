
#include <iostream>
#include <map>
using namespace std;





int main(){

    map<char,int>romanmap;
    romanmap.insert(pair<char,int>('I', 1));
    romanmap.insert(pair<char,int>('V', 5));
    romanmap.insert(pair<char,int>('X', 10));
    romanmap.insert(pair<char,int>('L', 50));
    romanmap.insert(pair<char,int>('C', 100));
    romanmap.insert(pair<char,int>('D', 500));
    romanmap.insert(pair<char,int>('M', 1000));
    //map<int,char>romanmap;
     
    //romanmap = { {1,'I'}, {5,'V'}, {10,'X'}, {50,'L'}, {100, 'C'}, {500,'D'}, {1000,'M'} };
    //romanmap = { {"I", 1}, {"V", 5}, {"X", 10}, {"L", 50}, {"C", 100}, {"D", 500}, {"M", 1000} };
    string input;
    cout << "Input roman numeral to be converted: " << endl;
    cin >> input;
    int number = 0;

    bool charI = false;
    for(int i=0; i<input.length(); i++){

       
        if(input[i] == 'I'){
            auto num = romanmap.find(input[i]);
            cout << " num is: " << num->second << endl;
            number += num->second;
            charI = true;
        }
        else{
            auto num = romanmap.find(input[i]);
            cout << " num is: " << num->second << endl;
            if(charI){
                number = number + num->second - 2;
                charI = false;
            }
            else{
                number += num->second;
            }
        }
    }
     cout << "Integer is: " << number << endl;
}










