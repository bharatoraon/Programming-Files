//
//  main.cpp
//  Prime Numbers
//
//  Created by Bharat Oraon on 24/01/21.
//
// Check The Number Whether it is Prime or not

#include <iostream>
using namespace std;
int main(){
    int n;
    int d=2;
    cout << "Enter The Number : " << endl;
    cin >> n;
    bool divided = false;
    while (d<n) {
        if (n%d==0){
            cout << "Not Prime" << endl;
            divided = true;
        }
        d=d+1;
    }
    if (!divided){
        cout << "Prime" << endl;
    }
}

