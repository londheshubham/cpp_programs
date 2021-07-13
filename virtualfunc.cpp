//calling same function on different on objects
//same function and have many different outcomes
// class Ninja will inherit from Enemy, hence all Ninja are Enemy
// all enemies will be having an attack power
// Ninja n;
//  Enemy *enemy= &n;  Ninja is an Enemy 
//anything an enemy can do, Ninja can do, cause Ninja is a specific type of Enemy


/*

#include<iostream>
using namespace std;
class Enemy{
	protected:
	int AttackPower;
	public:
	void SetAttackPower(int a){
	AttackPower=a;
	}


};

class Ninja: public Enemy{
	public:
	void attack(){
	cout<<"I am a Ninja, my Power is "<<AttackPower<<endl;	
	}


};



class Monster: public Enemy{
	public:
	void attack(){
	cout<<"I am a Monster, my Power is "<<AttackPower<<endl;	
	}


};

int main(){

Ninja n;
Monster m;


Enemy *enemy1=&n;
Enemy *enemy2=&m;

enemy1->SetAttackPower(29);
enemy2->SetAttackPower(99);

n.attack();
m.attack();




return 0;
}

*/



// Virtual Function Starts here
// Whenever we make a function virtual we can use it polymorphically
// each enemy that inherits from Enemy class will have an attack function
// virtual void attack(){} this tells us each inherited class will have an attack function, this is a template
//virtual functions are basically template functions
//any class that inherits virtual memebers whether its variables, members or functions is called polymorphic class
//we are calling the same function but it will have different result
//the base class instance which holds the pointer address of the inherited class knows to which class to call as the virtual function acts as a template


#include<iostream>
using namespace std;

class Enemy{
	public:
	virtual void attack(){}
	


};

class Ninja : public Enemy{
	public:
	void attack(){
	cout<<"I am Ninja"<<endl;		
	}
};

class Monster : public Enemy{
	public:
	void attack(){
	cout<<"I am Monster"<<endl;		
	}
};


int main(){
Ninja n;
Monster m;
Enemy *enemy1=&n;
Enemy *enemy2=&m;
enemy1->attack();
enemy2->attack();

return 0;
}
