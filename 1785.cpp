#include <iostream>
int test1785(){
    int n; 
    while(std::cin >> n){
        if( n > 999){
            std::cout << "legion\n" ; 
        }else if(n>499){
            std::cout << "zounds\n" ; 
        }else if(n>249){
            std::cout << "swarm\n" ; 
        }else if(n>99){
            std::cout << "throng\n" ; 
        }else if(n>49){
            std::cout << "horde\n" ; 
        }else if(n>19){
            std::cout << "lots\n" ; 
        }else if(n>9){
            std::cout << "pack\n" ; 
        }else if(n>4){
            std::cout << "several\n" ; 
        }else if(n>0){
            std::cout << "few\n" ; 
        }
    }
}