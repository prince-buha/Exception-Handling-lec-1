#include<iostream>
using namespace std;

int main(){
	int age;
	cout<<"enter your age:-";
	cin>>age;
	
	try{
		if(age<18){
			throw 18;
		}else{
			age>18;
			cout<<"you age is more 18 its you can give vote ";
		}
	}
	catch(int x){
		cout<<"your age is not a more than 18 because you don't give vote";
	}

	

}
