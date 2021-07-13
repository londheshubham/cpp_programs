/*simple settter getter method, the data is usually kept private which is accessed by setter and getter functions present in the class*/



#include<iostream>
#include<string>

using namespace std;

class ShubhamClass{
		public:
			void setName(string x){
			name=x;
			}
			
			string getName(){
				return name;
			}
		
		private:
			string name;
	
};

int main(){
	
	ShubhamClass ShubhObj;
	ShubhObj.setName("Shubham Londhe");
	cout<<ShubhObj.getName();
return 0;	
	
}
