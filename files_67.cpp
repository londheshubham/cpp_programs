#include<iostream>
#include<fstream>
using namespace std;
//ofstream for writing something to file
//ifstream for taking input from the file
//whenever we are working with files there is somethin called file marker
//file pointer starts at the very beginning of file
//EOF will return a false boolean and the while loop will end 
//the file is gonna get deleted ie deconstructor automatically when the EOF line is reached
int main(){
	
	ifstream theFile("players.txt");
	
	int id;
	string name;
	double money;
	
	while(theFile>>id>>name>>money){
	cout<<id<<","<<name<<","<<money<<endl;
	

	}	



}
