#include<iostream>
//compostion on class's function in another class
//one class's object in other class
using namespace std;
class Birthday{
private:
	int month;
	int year;
	int day;
public:
	Birthday(int d, int m, int y){
		month=m;
		year=y;
		day=d;
		
	}
	void printDate(){ 
		cout<<"Month is"<<month<<year<<day;
		
	}

	
};

class People{
	
private:
	string name;
	Birthday dateOfBirth; // this is a date of birth object and not variable	

public:
	People( string x, Birthday bo)
:name(x), dateOfBirth(bo)     			//when working with classes we need to have member initializer list   
	
	{	
	}
	
	
	void printInfo(){
		cout<<name<<"was born on";
		dateOfBirth.printDate();	
	}
	
};





int main(){

Birthday birthObj(12,04,1005);

People peopleObj("Shubham",birthObj);

peopleObj.printInfo();
	
	
}
