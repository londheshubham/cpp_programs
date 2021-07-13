#include<iostream>
#include<string>
using namespace std;

int main(){
	string s1("OMGHellYeah");
	cout<<s1.substr(1,3)<<endl;
	//start from the 1 char and go up to 3
	
	//swap function
	string one("apples");
	string two("beans");
	one.swap(two);	
	cout<<one<<endl;
		
	//strings are arrays of the characters
	string msg("ham is spam oh yes i am");
	cout<< msg.find("am")<<endl;

	/*it will give the starting index of the string which we wish to find though there are three occurences*/

	//to find the last occurence use rfind()
	cout<< msg.rfind("am")<<endl;	
	
	/*find() works from left to right and rfind() works from 			right to left*/

	

}
