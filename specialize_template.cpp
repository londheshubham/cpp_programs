#include<iostream>
using namespace std;
template <class T>
class Spunky{
	public:
		Spunky(T x){
		cout<<x<<"is not a character!"<<endl;

			}

};

template<>  				/*this line tells us we are going to use template*/
					/*specialization*/
class Spunky<char>{			/*this line which type of data we are specializing*/
	public:
	Spunky(char x){			/*char since we are specializing char type of data*/
					/*no generic type of data*/ 		 	  
	cout<<x<<"is indeed a character!"<<endl;	

	}

};

//we will be creating a bunch of different type of objects
/*whenever character type data comes across char it will be handled by special type of template otherwise generic type of data will go to */ 
int main(){

Spunky<int> obj1(7);
//this substitutes for t
Spunky<double> obj2(3.154);
Spunky<char> obj3('q');

}

