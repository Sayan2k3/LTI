#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int upper=0;
    int lower=0;
    for(int i=0;i<s.size();i++){
        if(isupper(s[i])) upper++;
        else lower++;
    }
    if(lower>upper){
        for(char &c:s){
            c=tolower(c);
        }
        
    }
    else{
        for(char &c:s){
            c=toupper(c);
        }
    }
    cout<<s;
}