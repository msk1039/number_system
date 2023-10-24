#include<iostream>
using namespace std;
int main(){
    int n,rem=0;
    string str="";
    cout<<"enter a number: "<<endl;
    cin>>n;
    while (n!=0){
        rem=n%2;
        str=str+to_string(rem);
        n=n/2;
    }
    cout<<str;
}