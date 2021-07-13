#include<iostream>
using namespace std;

class Shubh{
	public:
	int num;
			
	Shubh(int a){

	num=a;	

		}

	Shubh(){


	}


	Shubh operator+(Shubh ShubhObj){

	Shubh ShubhObjNew;
	ShubhObjNew.num=num+ShubhObj.num;
	return(ShubhObjNew);


	}




};


int main(){

Shubh a(4);
Shubh b(4);
Shubh c;
c=a+b;
cout<<c.num;
 
return 0;
}

