#include <iostream>
using namespace std ;
// conditionals in c++ 
int main(){
    int age ;
    cout << "Enter your age : " << endl;
    cin >> age ;
    if(age>=18 && age<=60){
        cout << "You can drive" <<endl;
    }
    else {
        cout << "You cannot drive" <<endl;
    }
    return 0 ;
}