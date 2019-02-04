#include "iostream"

#include "port.h"
using namespace std; 

int test1567(){
    int cost[28], tot = 0 ; 
    char buffer[1000] = {0};
    for(int i = 0 ; i < 28 ; i ++ ){
        cost[i] = i%3  + 1 ;
    }
    
    for(int i = 0; i<1000; i++){
        buffer[i] = 0 ;
    }
    
    cin.getline(buffer, 1000); 
    int idx = 0 ;
    char cc ;
    while((cc=buffer[idx++])!=0){ 
        cout << cc ;
       if(cc == '.'){
           tot += 1 ; 
       }else if (cc == ','){
           tot += 2; 
       }else if (cc == '!'){
           tot += 3; 
       }else if (cc == ' '){
           tot += 1; 
       }else if(cc>='a' && cc<= 'z'){
           tot += cost[(int)(cc-'a')] ;
       }else{
           break;
       }         
    }
    cout << "\n" ;
    cout << tot ;
}