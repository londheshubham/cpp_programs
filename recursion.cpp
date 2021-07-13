//recursion
#include<iostream>
using namespace std;
int Factorial(int a){
	if(a==1)
		
		return 1;
	
	else
	 	return a*Factorial(a-1);
	
}
int main(){
	
	cout<<Factorial(5)<<endl;
	
	return 0;
}
