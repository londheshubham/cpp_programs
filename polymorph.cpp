//calling same function on different on objects
//same function and have many different outcomes
// class Ninja will inherit from Enemy, hence all Ninja are Enemy
// all enemies will be having an attack power
// Ninja n;
//  Enemy *enemy= &n;  Ninja is an Enemy 
//anything an enemy can do, Ninja can do, cause Ninja is a specific type of Enemy

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
