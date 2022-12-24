#include <bits/stdc++.h> 
using namespace std; 
const int N=26; 
string check(string p){   
    int arr[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};//create array for storing number of alphbates     
    int flag=0;     
    for(int i=0;i<p.size();i++)     
    {         
        arr[p[i]-'a']++;//increamenting number of alphabates at there index  
    }     
    for(int i=0;i<N;i++)     {         
        if(arr[i]>1)//checking if the are counted more than 1 times. 
        {             
            flag=1;         
        }     
    }     
    if(flag==1){       
      return "Yes";     
    }
    else{        
        return "No";     
    } 
} 
int main(){
    int t;     
    cin>>t;     
    while(t--){         
        string p;         
        cin>>p;         
        cout<<check(p)<<endl;     
        } 
    }