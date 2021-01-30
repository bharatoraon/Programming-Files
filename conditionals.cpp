//
//  main.cpp
//  Conditionals & loops
//
//  Created by Bharat Oraon on 24/01/21.
//
// Compare Two Number

#include <iostream>
using namespace std;
int main() {
    
    int a,b;
    cout << "Enter The First Number : " << endl;
    cin>>a;
    cout << "Enter The Second Number : " << endl;
    cin >>b;
    if (a==b){
        cout << "The Number You Entered are Equal" << endl;
    }
    else{
        if(a>b){
            cout << "The Number You Entered is Greater Than second Number" << endl;
        }
        else{ cout << "The Number You Entered is Less Than Second Number" << endl;
        }
    }
    cout << "____________________________________________________________________" <<endl;
    int n;
    cout <<"Enter The Number : " << endl;
    cin >>n;
    if (n%2==0){
        cout << "The Number is Even" << endl;
    }
    else if(n%2!=0) {
        cout << "The Number is Odd" << endl;
    }
    cout << "____________________________________________________________________" <<endl;
     
    char c;
    cout << "Enter a Character : " << endl;
    cin >> c;
    if (c>=65&&c<=90){
        cout << "1" <<endl;
    }
    else if(c>=97&& c<=122){
        cout << "0" << endl;
    }
    else {cout << "-1" << endl;}
}
