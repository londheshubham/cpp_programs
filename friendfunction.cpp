#include<iostream>
using namespace std;
//friend function has access to everything inside the class
//we have built a friend function outside the class which can access everything inside the class ie we have made the function as the friend of the class
//whenever a class wants something to be its friend it can access members of the class, a class has to give away its friendship
class StankFist{
	public:
		StankFist(int a)
		:stinkyvar(a)
		{
		}
	private:
	int stinkyvar;
	friend void stinkyFriend(StankFist &sfo);
	
};

void stinkyFriend(StankFist &sfo){
	cout<<sfo.stinkyvar;
	
}

int main(){
	
	StankFist shubh(99);
	stinkyFriend(shubh);
	
	
return 0;
}
