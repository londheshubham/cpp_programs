//inheritance is the idea that you can inherit things from other class
//when you want to have a new class which has all the same functions and variables in it
//the class from which we inherit is called base class
//the class that gets all the stuff is called derived class
// class Daughter : public Mother this statement indicates that all the public stuff of class Mother is available to class Daughter
//the Daughter class is inheriting from Mother class
//all the public variables and functions are available to Daughter class
// 
#include<iostream>
using namespace std;

class Mother{

	public:
	Mother(){



		}
	void SayName(){

	cout<<"I am Roberts"<<endl;


		}


};

class Daughter : public Mother {





};


int main(){


Mother MotherObj;

Daughter Tina;

Tina.SayName();


return 0;

}
