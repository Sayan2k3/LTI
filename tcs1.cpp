#include<iostream>
using namespace std;
#include<string.h>
int main(){
    string s;
    getline(cin,s);
    int n=s.size();
    int count1=0;
    int count2=0;
    for(int i=0;i<n;i++){
        if(s[i]=='*') count1++;
         
        else{
            count2++;
        }
        
    }
    cout<<count1-count2;
    return 0;
    
}




