#include <iostream>
using namespace std;
int main(){
    int n,m,p,k,j;
    cin>>n>>m>>p>>k>>j;
    int banana_eaten=(m/k);
    if(m%k!=0) banana_eaten++;
    int peanut_eaten=(p/j);
    if(p%j!=0) peanut_eaten++;
    int total=banana_eaten+peanut_eaten;
    int left=n-total;
    if(left<0){
        left=0;
    }
    cout<<left<<endl;
}