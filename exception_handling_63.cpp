#include<iostream>
using namespace std;
//second number can't be zero since we can't divide by zero

int main(){
	try{
	int num1;
	cout<<"Enter first number:"<<endl;
	cin>>num1;

	int num2;
	cout<<"Enter second number:"<<endl;
	cin>>num2;
	
	if(num2==0){
	throw 0;
		
	
	}
	cout<<num1/num2<<endl;
	
	}catch(...){
	cout<<"you cant divide by 0"<<endl;


	}



}


//catch(...) shows the default catch block it will catch generic messages
//
