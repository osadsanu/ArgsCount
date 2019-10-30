// Name of program mainreturn.cpp 
#include <iostream> 
using namespace std; 
  
int main(int argc, char** argv) 
{ 
    cout <<  " arguments Number:" << argc << endl;
  
    for (int i = 0; i < argc; ++i) 
        cout << i <<": " << argv[i] << "\n"; 
  
    return 0; 
} 