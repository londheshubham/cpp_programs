//function template to work with different type of data
//if we use second as the return type of function then it will give us a float or if we use FIRST we will get a int
//depends on the value which we have passed first in the function

#include<iostream>
using namespace std;

template<class FIRST, class SECOND>
FIRST smaller(FIRST a,SECOND b){   
return (a<b?a:b);


}

int main(){

int x=90;
double y=67.22;

cout<<smaller(x,y)<<endl;

}
