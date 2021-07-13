#include<iostream>
#include<string>
using namespace std;
/*whenever we are using cin to read the input it takes the  first white space as the input*/
//cin read a piece of data

//for this we use getline in which newline is end of line ie enter
int main(){

	string bucky;
	//cin>>bucky;
	getline(cin,bucky);
	cout<<"the string i entered is: "<<bucky<<endl;
	return 0;


	//diff ways of creating string

	string s1="Shubham";
	string s2("Londhe"); /*object way of creating a string class*/
	string s3;

	s3=s1;
	s3.assign(s1);	/*the above two lines have similar
 functionality*/ 

	cout<<s1.at(3)<<endl;
 	//print the char at 3

	for(int x=0;x<s1.length();x++){
	cout<<s1.at(x);

	}

}


