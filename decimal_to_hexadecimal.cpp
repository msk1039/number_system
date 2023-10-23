//
// Created by Mayank kadam on 24/10/23.
//
#include<iostream>

using namespace std;

void reverseStr(string& str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}

char hexa(int x){
    switch(x){
        case 10:
            return 'A';
            break;
        case 11:
            return 'B';
            break;
        case 12:
            return 'C';
            break;
        case 13:
            return 'D';
            break;
        case 14:
            return 'E';
            break;
    }
}
int main(){
    int n,rem=0;
    string str="";
    char hex;
    cout<<"enter a number: "<<endl;
    cin>>n;
    while (n!=0){
        rem=n%16;
        if(rem>9){
            str=str+hexa(rem);
        }
        else{
            str=str+to_string(rem);
        }
        n=n/16;
    }
    reverseStr(str);
    cout<<str;
}