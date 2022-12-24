#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
		int num;
		cin >> num;
		for(int i=1; i<=num; i++){
			for(int j=1 ;j<= 2*num; j++)
			{
				if((i>=j)||(i>(2*num - j))){
					cout<< "*"<< " ";
				}
				else{
					cout<< "#"<<" ";
				}
			}
			cout<< endl;
		}		
	}    //Reading input from STDIN
	return 0;
}