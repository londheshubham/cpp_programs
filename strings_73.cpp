#include<iostream>
#include<string>
using namespace std;

int main(){

string s1("hi my name is bucky and i love bacon and ham!");
string test=s1;
cout<<s1<<endl;
string s2=test.erase(20); /*erases everything from the 20th char onwards*/

//.erase() work on the original variable it will change it completely

cout<<s2<<endl;

string s3=s1.replace(14,5, "Mayur Londhe");

/*.replace(star char, how long, to be replaced by(how long does not matter))*/

cout<<s3<<endl;


string s4=s1.insert(14,"lucky ");
//insert(start of the string, what you want to add before that)

cout<<s4<<endl;

//using this and loops we can have "find and replace" function like in word 

}
