//again, the only difficulty is in formation of the problem 
#include "iostream"

#include "port.h"
using namespace std; 

int test1991(){
    int n,k,temp, suv=0,unu=0; 
    cin >> n >> k ;
    
    int i = 0 ;
    while(i++ < n ){
        cin >> temp ;
        if(temp>k) unu += temp - k; 
        else{
            suv+=k-temp ;
        }
    }
    
    cout << unu << " " << suv ;
}