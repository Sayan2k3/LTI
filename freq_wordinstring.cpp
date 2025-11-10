#include<iostream>
using namespace std;
#include<map>
#include<sstream>
int main(){
    string s="hey i hey love hey you love";
    stringstream ss(s);
    string word;
    map<string,int>freq;
    while(ss>>word){
        freq[word]++;
    }
    for(auto it:freq){
        cout<<it.first<<it.second<<endl;
        
    }
}