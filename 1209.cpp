//reviw
#include "iostream"
#include "cmath"
int test1209(){
    int n, k, i;
    std::cin >> n ; 
    i=n;
    while(i-->0){
        std::cin >> k ;
        int temp = (int)sqrt(2*k); 
        if(2*k == temp * (temp + 1)) std::cout<<"1" ; 
        else std::cout << "0";
    }
}