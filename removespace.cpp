#include<iostream>
#include<string.h>
using namespace std;
string removespace(string s){
    string res;
    for(int i=0;i<s.size();i++){
        if(s[i]==' ') continue;
        res+=s[i];
           
    }
    return res;
    
}
int main(){
    string s;
    cout<<"enter string"<<endl;
    getline(cin, s);
    cout<<removespace(s)<<endl;
}