// #include <iostream>
// using namespace std;
// // public private and protected are access modifiers 
// //  public : anyone can access 
// // private : can be accessed inside the class only
// // protected  : can be accessed in subclass only 

// class employee {
//     public : 
//     string name ;
//     int salary ;
// };

// int main(){
//     employee details ;
//     details.name = "Manash" ;
//     details.salary = 456;
//     cout << "The name of the employee is " << details.name << " and his salary is " << details.salary << endl ;
//     return 0 ;

// }

// method 2 

// #include <iostream>
// using namespace std ;

// class employee {
//     public : 
//     string name ;
//     int salary ;
//  void printDetails(){
//     cout << "The name of the employee is : " << this->name << " and his salary is " << this->salary << endl;
//  };
// };

// int main(){
//      employee details;
//      details.name = "Manash" ;
//      details.salary = 34897 ;
//      details.printDetails();
//     return 0 ;
// }

// method 3 : using constructors 

#include <iostream>
using namespace std ;

class employee {
    public : 
    string name ;
    int salary ;

    employee(string n , int s , int pas){
  this->name = n ;
  this->salary = s ;
  this->secretPassword = pas ;
    };

    void printDetails(){
       cout << "The name of the employee is " << this->name << " and his salary is " << this->salary << endl;
    }
    void printPass(){
        cout << "The password is" << this->secretPassword << endl ;
    }

    private : 
    int secretPassword ;

    
};

int main(){
    employee details("Manash" , 3534 , 65456);
     details.printDetails();
       details.printPass();
    return 0 ;
}