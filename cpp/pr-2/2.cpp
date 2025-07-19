#include<iostream>
using namespace std;

void main(){
    int n;
    int count = 0;

    cout << "enter a number:";
    cin >> n;

    if(n == 0){
        count = 1;
    }
    else{
        while(n != 0 ){
            n/= 10;
            count++;
        }
    }
    cout << "number of Digit :" << count << endl;
}