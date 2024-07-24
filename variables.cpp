#include <iostream>
using namespace std ;

int main(){
    // short ,int ,long and long long  is for  storing numbers 
    int a = 89 ;
    short b = 7456 ;
    long c = 934295012;
    long long const d = 93429501256436564;
    float e = 8.435 ;
    double  f = 5.6768 ;
    long double g = 567.4353464564567;
    char ch = 'A';

    // we can reassign the value as well 
    f = 7.78329;
    // To stop reusing we can use const 
    //  Example : float const e = 5.65 
    cout << "The value of int is " << a <<endl ;
    cout << "The value of short is " << b <<endl ;
    cout << "The value of long is " << c <<endl ;
    cout << "The value of long long is " << d <<endl ;
    cout << "The value of float is " << e <<endl ;
    cout << "The value of double is " << f <<endl ;
    cout << "The value of  long double is " << g <<endl ;
    cout << "The value of  char is " << ch <<endl ;
    return 0 ;
}