#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x=0;
        int n;
        cin>>n;
        if(n==++x){
            ++x;
        }
        else if(n==--x){
            --x;
        }
        else if(n=x++){
            x++;
        }
        else{
            x--;
        }
        cout<<x;
    }
    return 0; 
}