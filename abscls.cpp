// before going to pure virtual function, will see what is virtual function
// if no attack function in any of the derived classes then the attack function from the base class will be inherited
#include<iostream>
using namespace std;
 
class Enemy{
	public:
	virtual void attack(){
	cout<<"I am the enemy class attack"<<endl;
	
	}


};


class Ninja : public Enemy{
		public:
		void attack(){
		cout<<"I am Ninja attack"<<endl;
				
			}			


};

class Monster : public Enemy{
		public:
		/*void attack(){
		cout<<"I am Monster attack"<<endl;
				
			}

		*/			


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
