//constructors to initialise the private data, costructors are initialized whenever a class object is declared

#include<iostream>
#include<string>
using namespace std;

class ShubhClass{
	private:
		string name;
	public:
		ShubhClass(string z){
				SetName(z);
		}
		void SetName(string x)
		{
			name=x;
			
		}
	
		string GetName(){
			return name;
			
		}
};

int main(){
	
	ShubhClass ShubhObj("Shubham Londhe"); //Parameter being passed to the constructor
	//ShubhObj.SetName("Shubham Londhe");
	//cout<<ShubhObj.GetName();
	cout<<ShubhObj.GetName()<<endl;
	ShubhClass LondheObj("IITJ");
	cout<<LondheObj.GetName();
	
	return 0;
	
	
	
	
}
