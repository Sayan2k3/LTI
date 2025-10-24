//Methodd1
#include<iostream>
#include<string.h>
using namespace std;
string uppercase(string s){
    for(int i=0;i<s.size();i++){
        s[i]=toupper(s[i]);
    }
    return s;
    
}
int main(){
    string s;
    cout<<"enter string"<<endl;
    cin>>s;
    cout<<uppercase(s)<<endl;
}

//Methodd2
#include<iostream>
#include<string.h>
using namespace std;
string uppercase(string s){
    for(int i=0;i<s.size();i++){
        s[i]=s[i]-32;
    }
    return s;
    
}
int main(){
    string s;
    cout<<"enter string"<<endl;
    cin>>s;
    cout<<uppercase(s)<<endl;
}