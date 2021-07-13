#include<iostream>
//pass by reference
//when we pass any function by pass by reference the same memory address is used, hence creating no copies and saving memory
using namespace std;
void PassByRef(int *x);
void PassByValue(int x);
//declaring function or prototyping the functions

int main()
{
	int shubh=13;
	int lon=18;
	PassByValue(shubh);
	PassByRef(&lon);
	
	
	cout<<shubh<<endl<<lon;
			
}

void PassByValue(int x){
	x=99;
	
	
}

void PassByRef(int *x)
{

*x=66;	
	
}

