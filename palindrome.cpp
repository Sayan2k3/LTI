#include<iostream>
using namespace std;
#include<string.h>

bool palindrome(string s){
    int i=0;
    int j=s.size()-1;
    while(i<j){
        if(s[i]!=s[j]){
            return false;
            
        }
        i++;
        j--;
    }
    return true;
}

int main(){
    string s;
    cout<<"enter the string : "<<endl;
    cin>>s;
    cout<<palindrome(s)<<endl;
}