//function overloading
//whatever type of data we pass the corresponding function gets called
#include<iostream>
using namespace std;
void printNumber(int a){
	cout<<"I am printing an integer"<<a<<endl;	
}

void printNumber(float a){
	cout<<"I am printing a float"<<a<<endl;
	
}


int main()
{
	
	
	int a=29;
	int b=98.9;
	printNumber(a);
	printNumber(b);
	return 0;
}
