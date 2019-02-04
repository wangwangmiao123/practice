#include "iostream"

#include "port.h"
using namespace std; 

int test1581(){
    int N,x,numb,ct; 
    cin >> N ;
    
    int i = 0 ; 
    while(i++<N){
       cin >> x; 
       if( i == 1 ){
           ct = 1; 
           numb = x; 
       }else if( x!= numb){
           cout << ct << " " << numb << " "; 
           numb=x; ct=1; 
       }else{
           ct ++ ;
       }
    }
    cout << ct << " " << numb ; 
}