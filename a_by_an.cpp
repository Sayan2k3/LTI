
#include <bits/stdc++.h>
using namespace std;
string rever(string s){
    int n=s.size();
    string ans="";
    // reverse(s.begin(),s.end());
    for(int i=0;i<n;i++){
        string word="";
        while(i<n && s[i]!=' '){
            word+=s[i];
            
            i++;
            
        }
        if(word =="a"){
                word="an";
            }
        // reverse(word.begin(),word.end());
        if(word.length()>0){
            ans+=" "+word;
        }
        
    }
    return ans.substr(1);
}

int main() {
    string s;
    cout<<"eneter string"<<endl;
    getline(cin,s);
    cout<<rever(s);

    return 0;
}




