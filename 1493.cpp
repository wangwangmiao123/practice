#include "iostream"

#include "port.h"
using namespace std; 

struct X{
    struct X * prev; 
};
int test1493(){
    int n,A,B; 
    
    cin >> n; 
    A=n/100000 + n%100000%10000 + n%10000/1000;
    B=n%1000/100 + n%100/10 + n%10;
    if(A-B==1){
        if(n%10 != 9) cout << "Yes";
    }else if(B-A==1){
        if(n%10!=0)cout << "No";
    }else{
        cout << "No";
    }
    struct X note ; 
        
}