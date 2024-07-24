// for loop 
// printing 1 -10 

#include <iostream>
using namespace std ;

int main(){
    int n = 10 ;
    for(int i = 1 ; i <= n ; i++){
        cout << "The value of i is : " << i << endl ;
    }
    return 0 ;
}

// while loop 
// printing 1 - 10 

#include <iostream>
using namespace std ;

int main(){
    int n = 10 ;
    int i = 1 ;
    while(i<=n){
     cout << "The value of i is : " << i << endl ;
     i = i + 1 ;
    }
    return 0 ;
}

// do while loop 

#include <iostream>
using namespace std ;

int main(){
    int n = 10 ;
    int i = 1 ;
    do {
    cout << "The value of i is : " << i << endl ;
    i = i + 1 ;
    }while(i<=n);
    return 0 ;
}