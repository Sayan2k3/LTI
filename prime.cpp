#include<iostream>
using namespace std;

int main(){
    int count=0;
    int num=5;
    int i=1;
    
    while(i<=num){
        
        if(num%i==0){
            count++;
            
        }
        i++;
    }
    if(count==2){
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }
}    