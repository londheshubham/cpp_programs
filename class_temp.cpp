#include<iostream>
using namespace std;

//class template 
//template means a generic datatype

template <class T>
//using a word is a good programming practice
//we have made a generic type of data

class Bucky{
T first, second;
public:
	Bucky(T a,T b){
	first=a;
	second=b;
	}
	T bigger();	


};

//we are going to have a function called bigger which belongs to bigger 
//but is outside the class 
//before every single function declaration we need to have template declaration 

template <class T>
T Bucky<T>::bigger(){
	return (first>second?first:second);
}
//after the class name we need to include the function parameter

//the initial error we got error: missing template arguments before ‘bo’
//between class an the object we need to pass <int>
int main(){

Bucky<int> bo(69,105);
cout<<bo.bigger();
return 0;

}

