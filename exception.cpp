#include<iostream>
using namespace std;
//in try block we write where the error might occur
//catch block is for if there is indeed an error
//if no error then catch block is not run
//exception handling used for memory allocation tasks
int main(){

try{

	int momsAge=39;
	int sonsAge=34;	
	
	if(sonsAge>momsAge){
	throw 99;

	}

}catch(int x){

	cout<<"son can not be older than mom, ERROR NUMBER:"<<x<<endl;

}


}
