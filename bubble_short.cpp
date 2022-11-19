#include <iostream>
#include <ctime>

using namespace std;

// Random number generator
int randNum(){
    int min=1,max=100;
    srand(time(0));

    return rand()% (max - min + 1 ) + min ;
  
}
int main(){

    
   cout << randNum() << endl;
}
