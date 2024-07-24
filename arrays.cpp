#include <iostream>
using namespace std ;

int main(){
    int marks[5];
    marks[0] = 12;
    marks[1] = 124;
    marks[2] = 1265;
    cout<< "The marks is : " << marks[0] << endl;
    cout<< "The marks is : " << marks[1] << endl;
    cout<< "The marks is : " << marks[2] << endl;
    return 0 ;
}

#include <iostream>
using namespace std ;
int main(){
    int marks[3] = {21,43,56};
    cout << "The value at  index 0 is " << marks[0] << endl;
    cout << "The value at  index 1 is " << marks[1] << endl;
    cout << "The value at  index 2 is " << marks[2] << endl;
    return 0 ;
}


#include <iostream>
using namespace std ;

int main(){
    int  marks[5] ;
    for(int i = 0 ; i <5 ; i++){
        cout << "Enter the mark of student  " << i + 1  <<endl ;
        cin >> marks[i];
    }
    for (int i = 0 ; i<5 ; i++){
        cout << "The marks of  student " << i + 1 << " is " << marks[i] << endl ;
    }
    return 0 ;
}

// 1D array format 
// int marks[3] = {12,24,54};

// 2D array format 
// int data[2][3] = {
//     {1,2,3},
//     {4,5,6}
// }

#include <iostream>
using namespace std ;

int main(){
    int data[2][3] = {
        {11,234,45},
        {456,56,32}
    };
    int i = 0 ;
    while(i<2){
       int j = 0 ;
       while(j<3){
        cout << "The value at  position " << i << j << " is " << data[i][j] << endl ;
        j = j+ 1 ;
       }
       i = i + 1 ;
    }
    return 0 ;
}

