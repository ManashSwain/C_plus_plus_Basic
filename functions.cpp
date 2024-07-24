#include <iostream>
using namespace std ;
int add(int a , int b){
    int c ;
    c = a + b ;
    return c ;
}
int main(){
    int a , b , res ;
    cout << "Enter the value of a : " << endl ;
    cin >> a ;
    cout << "Enter the value of b : " << endl ;
    cin >> b ;
    res = add(a,b);
    cout << "The result is : " << res << endl;
    return 0 ;
}