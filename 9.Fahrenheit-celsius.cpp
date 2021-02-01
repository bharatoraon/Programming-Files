#include <iostream>
using namespace std;
int main(){
 float s;
 float e;
 float w;
 float c;
 cout << "Enter Starting Value : " << endl;
 cin >>s;
 cout << "Enter End Value : " << endl;
 cin >>e;
 cout << "Enter Width : " << endl;
 cin >>w;
 while(s<e){
  c=(s-32)*5.0/9.0;
  cout << s << " " << c << endl;
  s=s+w;
 }

}
