#include<iostream>
using namespace std;
#include<string.h>
int count(string s){
    int n=s.size();
    int count=0;
    for(int i=0;i<n;i++){
        if(s[i]=='i' || s[i]=='e' || s[i]=='o' || s[i]=='a' ||
        s[i]=='u'){
            count++;
        }
    }
    return count;
}

int main(){
    string s;
    cout<<"enter string :"<<endl;
    cin>>s;
    cout<<count(s)<<endl;
    return 0;
    
}