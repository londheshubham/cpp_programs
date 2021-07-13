// before going to pure virtual function, will see what is virtual function
// if no attack function in any of the derived classes then the attack function from the base class will be inherited
// **** NOW ABOUT PURE VIRTUAL FUNCTION ******
// the pure virtual function has no implementation, the derived base class must have its own implemetation of virtual function or it must overwrite the virtual function in the base class 
//when you want all your monsters in your game to have, different attack and not the same then this is useful, pure virtual functions play a very crucial role here
#include<iostream>
using namespace std;
 
class Enemy{
	public:
	virtual void attack()=0;
	
	
	


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
