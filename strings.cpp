#include <iostream>
#include <string>
using namespace std ;

int main(){
    string name = "Manash";
    cout << "My name is "<< name << endl ;
    cout << "My length is "<< name.length() << endl ;
    cout << "substring of (0,3) is "<< name.substr(0,3) << endl ;
    return 0 ;
}

