#include<iostream>
#include<map>
using namespace std;

int main(){

map<int, string> name_map;
name_map[1]="value";
name_map[2]="value_two";
name_map[3]="value_three";

map<int, string>::iterator stankfist;

for ( stankfist = name_map.begin(); stankfist != name_map.end(); stankfist++ )
{
    cout << stankfist->first;  // string (key)
    cout << ':';
    cout << stankfist->second;   // string's value 
    cout << endl ;
}


return 0;
}
