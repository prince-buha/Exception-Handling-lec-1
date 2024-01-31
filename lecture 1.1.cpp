/*
cannot divide by 0 its impossible
*/

#include<iostream>
using namespace std;

int main(){
	int x;
	int y;
	int z;
	
		
		
		try{
			if(y==0){
				throw 43;
			}else{
				z=x/y;
				cout<<z<<endl;
			}
		}
			catch(int x){
				cout<<"cannot divide by 0 its impossible "<<endl;
			}
		
		return 0;
	
}
