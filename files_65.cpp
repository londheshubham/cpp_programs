#include<iostream>
#include<fstream>
using namespace std;
//whenever a file object is created it takes a optional parameter in the constructor // we pass the filename in the constructor
//isopen() function is used on file object it returns true if object is currenlty associated with the file
// in real world we wish to check whether the file is open

int main(){

ofstream buckysFile("beefjerky.txt");
if(buckysFile.is_open()){
cout<<"ok the file is open"<<endl;

}
else{
cout<<"the file is not open, you messed up Shubham"<<endl;
}

buckysFile<<"oi love the beef!";
buckysFile.close();

}
