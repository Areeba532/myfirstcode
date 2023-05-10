#include <iostream>
#include <cstdlib>
using namespace std;
class MyClass {       // The class
  public:             // Access specifier
    int myNum;
  string greetings;       // Attribute (int variable) 
};

int main() {
	
  MyClass myObj;  
  

  
  myObj.myNum = 15; 
  myObj.greetings = "some text";
  
  cout<<myObj.myNum;
  cout<<myObj.greetings;
  
  return 0;
}
