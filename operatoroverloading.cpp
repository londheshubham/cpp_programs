
#include<iostream>
using namespace std;


class Shubh{
		
	public:
	int num;
	Shubh(){


	}

	Shubh(int a)
	{
	num=a;
	}
	//this constructor of the class is for instance with no parameter
	
	Shubh operator+(Shubh ShubhObj){
	Shubh ShubhObjNew;	
	// num is current object it added other object which is ShubhObj ie b, and it returned a 		brand new object
	
	ShubhObjNew.num=num+ShubhObj.num;
	return(ShubhObjNew);
	
	}
};


int main(){
  
Shubh a(5);
Shubh b(4);
Shubh c;

c=a+b;

cout<<c.num;

return 0;
}
