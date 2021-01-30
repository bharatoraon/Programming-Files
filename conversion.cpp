//
//  main.cpp
//  Conversion (F-C)
//
//  Created by Bharat Oraon on 18/01/21.
//

#include <iostream>
using namespace std;
int main() {
    float f;
    float c;
    cout << "Enter The Farenheight Value" << endl;
    cin >> f;
    c=(f-32)*5.0/9.0;
    int r = 10 % 3;

        cout << 10 % 3 << endl;
        cout << c << endl;
        cout << r << endl;

        int a;
        int b;
        cout << "Enter a and b" << endl;
        cin >> a >> b;

        bool Is_Equal = (a == b);
        bool Is_Greater = (a > b);
        bool Is_Less = (a < b);
        cout << "Are they Equal " << Is_Equal << endl;
        cout << "is A greater " << Is_Greater << endl;
        cout << "is A less " << Is_Less << endl;

        bool third = Is_Equal && Is_Greater;
        bool fourth = Is_Equal || Is_Less;

        cout << "Not equal " << !Is_Equal << endl;
        cout << third << endl;
        cout << fourth << endl;

}
