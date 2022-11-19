#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

// Random number generator
int randNum(){
    int min=1,max=100;
    return min+rand()%max ;  
}
int main(){
    int leng;
    cout <<"Dizi boyutunu belirleyiniz:";
    cin >> leng;

    
    int arr[leng];
   
   //create array
    for (int i = 0; i < leng; i++)
    {   
        arr[i]=randNum();
    }

    cout <<"Dizi:[";
        for (int i = 0; i < leng; i++)
    {   
        cout << arr[i]<<",";
    }
    cout <<"]"<< endl;
    getch();
}
