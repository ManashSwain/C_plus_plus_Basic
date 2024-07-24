#include <iostream>
using namespace std ;

int main(){
    int a = 67 ;
    int* b = &a ;
    cout << "The value of a is : " << a << endl ;
    cout << "The address of a is : " << b << endl ;
    cout << "The value at address a is " << *(b) << endl;
    return 0 ;
}