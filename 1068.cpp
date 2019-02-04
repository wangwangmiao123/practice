#include "iostream"

#include "port.h"
using namespace std; 

int test1068(){
    int N ; 
    cin >> N ;
    if(N>0){
        cout << N*(N+1)/2 ;
    }else{
        cout << 1-(-N)*(1-N)/2 ; 
    }
}