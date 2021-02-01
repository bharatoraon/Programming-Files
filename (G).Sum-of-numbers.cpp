//
//  main.cpp
//  Sum of Two Numbers
//
//  Created by Bharat Oraon on 18/01/21.
//

#include <iostream>
using namespace std;
int main() {
    int a; // Int Data Types Stores Numbers & Generally it's of 4 Bytes - 32 Bits
    int b; // Syntax - ( int a;)
    cout << "Enter The First Number : " << endl;
    cin >> a;
    cout << "Enter The Second Number : " << endl;
    cin >> b;
    int c=a+b;
    
    cout << c << endl;
    
    cout << "-------------------------------------------------------------------" << endl;
    
    char d; //Character Data Types Store Characters or Alphabets
    d='A';  // generally it's size is 1 Bytes - 8 Bits
    
    cout << d << endl;
    
    float e; // Float Data Types Stores Decimal Values
    e=2.875; // it's size is 4 Bytes - 32 Bits
    
    cout << e << endl;
    
    double f; // In Case Our Decimal Value is Very Much Large then we need another                 data type to store Decimal Value that is double data types
    f=36857.676647464; // it's size is 8 Bytes - 256 Bits
    
    cout << f << endl;
    
    bool g; // Bool Data Types Store The Value of True or Falue
    g=true; // it's size is 2 Bytes - 16 Bits
     
    cout << g << endl;
    
    // One Thing Need to Understand That We Can't Give Same name to Another Variable.
    
    // For The Curiosity if we Want to know the size of data types we can use inbuilt function of c++ that is sizeof(); function
    
    int size = sizeof(e); //here one thing to understand the size always is in integer so                     we are using int in front
    
    cout << size << endl;
    
}
