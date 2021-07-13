#include<iostream>
using namespace std;
class Calculator{
	public:
	int sum(int a,int b)
	{

	return a+b;

	}

};


int main(){

Calculator calc;

int x=calc.sum(2,3);

cout<<x;

}
