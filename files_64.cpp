#include<iostream>
#include<fstream>
using namespace std;

//first create a file object
//always close the file any buffer or memory or resources the file was using it will closed and the computer's memory will be closed
//if the file is not present it will be created
int main(){

ofstream buckyFile;
buckyFile.open("tuna.txt" );
buckyFile<<"I love tuna and tuna loves me"<<endl;
buckyFile.close();


}
