#include <bits/stdc++.h>
using namespace std;

int main(){
    string s="aabbbcc";
    map<char,int>freq;
    int count=1;
    for(char c:s){
        freq[c]++;
    }
    for(auto it:freq){
        cout<<it.first<<it.second<<endl;
    }
    
}