#include<iostream>
using namespace std;

class Shubh{

 		//weird syntax this is just a list so no ; This is called as the member initializer list	
public:
	Shubh(int a, int b)
	:regVar(a) , constVar(b){
	}
	void print(){
		cout<<"Reg var is"<<regVar<<"const var is"<<constVar<<endl;
			
			
		}
	private:
		int regVar;
		const int constVar;
};

int main(){
	
	Shubh ObjShubh(3,87);
	ObjShubh.print();
	return 0;
	
}
