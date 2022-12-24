#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>> t;
   while(t--){
      int N,M;
      cin>> N;
      cin>>M;
      long long int A[N];
      long long int B[M];
      for(int i=0;i<N;i++){
         cin>> A[i];
      }
      for(int i=0;i<M;i++){
         cin>>B[i];
      }
       int hsh[M+N];
	    for(int i=0; i<M+N; ++i){
	        hsh[i]=0;
	    }
	    for(int i=0; i<N; i++){
	        hsh[A[i]]++;
	    }
	    for(int j=0; j<M; j++){
	        hsh[B[j]]++;
	    }
	    for(int i=1; i< M+N; i++){
	        if(hsh[i]==1){
	            cout<<i<<" ";
	        }
	    }
   }
   return 0;
}