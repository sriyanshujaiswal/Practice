#include<bits/stdc++.h>
using namespace std;
const int N= 1e6+10;
int pf[N];
int flage=0 ;
int main(){
   long long int n;
   long long int k;
   cin>> n;
   cin>>k;
   long long int arr[n];
   for(int i=0; i< n; i++){
   cin>> arr[i];
   }
   sort(arr,arr+n);
   for(int i=1;i<n; i++){
      pf[i]=pf[i-1] + arr[i];
   }
   for(int i=1; i<n; i++){
      if(k==pf[i+1]- pf[i-1]){
         flage=1;
      }
      if(k==999999){
      flage=1;
   }
   }
   if(flage==1){
      cout<<"YES";
   }
   else{
         cout<<"NO";
      }
   
   return 0;
}