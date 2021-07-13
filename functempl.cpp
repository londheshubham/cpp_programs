//suppose we wish to build a calculator
//as we have made the first function which has int at its return type, we wish to do addition for float, double and all other data types
//so to do that what if we could replace int in the function with a generic datatype
// ie wish to build function that can handle multiple types of data
//first we need to build a template definition, template definition is building generic type of data

#include<iostream>
using namespace std;

template<class bucky>
bucky addCrap(bucky a, bucky b){

return a+b;
}

/*int addCrap(int a, int b){

return a+b;
}*/
int main(){

int x=23,y=27,z;

double k=54.55,i=90.11,o;

string op="oplkj", mp="uioqrew"; 

z=addCrap(x,y);
o=addCrap(k,i);
cout<<z<<endl;
cout<<o<<endl;
cout<<addCrap(op,mp);

return 0;
}
