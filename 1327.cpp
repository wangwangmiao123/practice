//The first sorting program I encounter during this process
#include "iostream"

#include "port.h"
using namespace std; 

int test1327(){
    int A, B; 
    cin >> A >> B; 
    if(A%2 && B%2){
        cout << 1+(B-A)/2; 
    }else if(A%2==0 && B%2 ==0){
        cout << (B-A)/2; 
    }else{
        cout << (B-A-1)/2 +1 ;
    }
} 