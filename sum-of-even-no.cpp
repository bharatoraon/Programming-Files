// Printing Sum of Even Numbers Till N
 #include <iostream>
using namespace std;
int main(){
    int n;
    int d=1;
    int sum=0;
    cout <<"enter no"<<endl;
    cin>>n;
    while(d<=n){
        if(d%2==0){
            sum=sum+d;
        }
        d=d+1;
    }
    cout << sum << endl;
}