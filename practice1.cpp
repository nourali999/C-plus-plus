#include <iostream>
#include "common.h"

using namespace std;


int main(){

    cout << "Hello World" << endl;
    
  
    cout<< "The sum is  " << add(5,4) << endl;


    cout<< " " <<endl;

    int A[5]{2,4,6,8,10};

    int *p = A;

    *p++;

    cout<<  *p     <<endl;




    return 0;

}