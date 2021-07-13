#include<iostream>
using namespace std;
/*why this keyword is used, it stores addres of the current object ie ShubhObj Tells C++ explicitly that we are working with this current obeject 
this is a special type of pointer

(*this) is dereferencing the pointer here we get the address of the pointer explicit memory location


*/

class Shubh{

private:

	int h;
public:

	Shubh(int num=0)
		:h(num){

			}
 

	void printcrap(){

		cout<<"h="<<h<<endl;
		cout<<"this->h="<<this->h<<endl;
		cout<<"(*this).h="<<(*this).h<<endl;



			}

};

int main(){

Shubh ShubhObj(5);

ShubhObj.printcrap();

return 0;

}


