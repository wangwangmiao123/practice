#include "iostream"

int test1880(){

    int n1,n2,eigenvalue = 0, curs = 0; 
    
    std::cin >> n1 ; 
    int *store = new int[n1]; 
    char*hit  = new char[n1];    
    for ( int i = 0 ; i < n1 ; i++ ){
               hit[i] = '0'; 
               std::cin >> store[i];
    }
    
    curs = 0;
    std::cin >> n2 ; 
    for ( int i = 0 ; i < n2 ; i++ ){
        int temp ; 
        std::cin >> temp ;
        while(curs < n1){
            if(temp == store[curs]){
                hit[curs++] += 1; 
                break;
            }else if(temp > store[curs]){
                curs++;
            }else{
                break;
            }
        }
    }
    //std::cout << hit;
    
    curs = 0;
    std::cin >> n2 ; 
    for ( int i = 0 ; i < n2 ; i++ ){
        int temp ; 
        std::cin >> temp ;
        while(curs < n1){
            if(temp == store[curs]){
                hit[curs++] += 1; 
                break;
            }else if(temp > store[curs]){
                curs++;
            }else{
                break;
            }
        }
    }    
    //std::cout << hit;
    
    for ( int i = 0 ; i < n1 ; i++ ){
        if(hit[i] == '2' ) eigenvalue++;
    }
    std::cout << eigenvalue; 
}