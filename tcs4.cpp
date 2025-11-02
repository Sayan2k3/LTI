#include<iostream>
using namespace std;
#include<string.h>
int main(){
    int n;
    cin>>n;
    char s[n];
    bool found=false;
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(s[i]==s[j]){
                count++;
            }
        }
        if(count%2!=0){
            found=true;
            cout<<s[i];
            break;
        }
        
    }
    if(!found){
        cout<<"All are even";
    }
    return 0;
    
}

// Method 2 : Using map

#include<iostream>
using namespace std;
#include<unordered_map>
#include<string.h>
int main(){
    int n;
    cin>>n;
    char s[n];
    
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    unordered_map<char, int>count;
    for(int i=0;i<n;i++){
        count[s[i]]++;
    }
    bool found=false;
    for(int i=0;i<n;i++){
        if(count[s[i]]%2!=0){
            cout<<s[i];
            found=true;
            break;
        }
    }
    if(!found){
        cout<<"All are even";
    }
    return 0;
    
}




