//when anything is private only the current class has the access to it
//derived class has access to the public and protected variables, but not to private 
//derived class cannot access private variable from the base class
#include<iostream>
using namespace std;

class Mother{

public:
	int publicv;

protected:
	int protectedv;

private:
	int privatev;



};


class Daughter : public Mother {

public:

void DoNothing(){

publicv=1;
protectedv=2;
//privatev=3;
//uncomment this to get the error
}





};



int main()
{

Daughter Tina;
Tina.DoNothing();
return 0;
}
