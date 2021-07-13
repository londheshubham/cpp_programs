#include<iostream>
#include<fstream>
using namespace std;
//when c++ opens its gonna look for a end of file marker
//the while loop is going to be true as long as they enter the characters and
//Ctrl+D is the EOF(end of file) character used in ubuntu

int main(){

	ofstream theFile("players.txt");
	cout<<"Enter Players ID, Name and Money"<<endl;
	cout<<"press Ctrl+D to quit"<<endl;
	
	int idNumber;
	string name;
	double money;
	
	while(cin>>idNumber>>name>>money){
	theFile<<idNumber<<' '<<name<<' '<<money<<endl;

	}
	
	

	return 0;
}
