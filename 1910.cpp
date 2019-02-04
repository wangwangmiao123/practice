#include "iostream"

int test1910(){
    int  n, tot, t[3],curs = 0 ;
    int  pos = 2; 
    std::cin >> n;  
    
    std::cin >> t[0];
    std::cin >> t[1]; 
    std::cin >> t[2]; 
    tot = t[0]+t[1]+t[2]; 
    
    for ( int i = 0 ; i < n-3; i++)  {
        std::cin >> t[(curs+3)%3] ; 
        if(t[0]+t[1]+t[2] > tot){
            pos = 3 + i ; 
            tot = t[0]+t[1]+t[2]  ;
        }
        curs ++;
        std::cout << t[0] << " " << t[1] << " " << t[2] << " \n"  ; 
            
    }
    std::cout << tot << " " << pos ; 
}