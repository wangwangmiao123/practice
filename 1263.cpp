// all some very basic things, like i++ 
// like initialize with vote[N] = {0}; 
// like ...
#include "iostream"
#include "stdio.h"
#include "port.h"
using namespace std; 

int test1263(){
    int N,M ; 
    cin >> N  >> M ;
    
    int vote[N] = {0};
 
 
    int i = 0 ; 
    while(i++<M){
        int k ; 
        cin >> k; 
        vote[k-1]++;
    }
    
    i = 0 ; 
    while(i<N){
        printf("%.2f%\n",(100.0*vote[i])/M); 
        i++;
    }
    
     
}