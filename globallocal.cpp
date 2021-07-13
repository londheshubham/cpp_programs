// unary scope operator
//one is always going through local variable
//:: use the global variable

#include<iostream>
using namespace std;
int tuna =20;
int main(){
void Shubham();	
	double tuna=20.1;	
	//Shubham();
	cout<<::tuna<<endl;
	cout<<tuna<<endl;
	return 0;
}


/*void Shubham(){
	
	cout<<tuna<<endl;
}

*/

