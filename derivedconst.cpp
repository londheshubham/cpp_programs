//Public Access modifier: This modifier is open to use inside as well as outside the class.
//Protected Access modifier: This modifier is open to use within the class in which it is defined and its child or inherited classes.
//Private Access modifier: This modifier is open to use within the class that defines it. ( it can’t be accessed outside the class means in inherited class).


//the derived class does not inherit, constructor or deconstructor from the base class


//the daughter does not inherit mother constructor

//the derived class will invoke the base classes constructor

//the very top constructor will be executed first

// whenever an object is destroyed its deconstructor gets called
//when a deconstructor gets called it sets chain of deconstuctor to call

//the upper most class is instantiated first

#include<iostream>
using namespace std;


class Mother{
	public:
	Mother(){
	cout<<"I am Mother constructor"<<endl;


		}
	~Mother(){
	cout<<"Mother Deconstructor"<<endl;



		}





};


class Daughter:public Mother{
	public:
	Daughter(){
	cout<<"I am Daughter constructor"<<endl;
	
	
		}
	~Daughter(){
	cout<<"Daughter Deconstructor"<<endl;	
		}


};


int main(){


//Mother ma;

Daughter Tina;

}


