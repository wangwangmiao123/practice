//review model
#include <iostream>
int test1225(){
    int n ;
    std::cin >> n ; 
    int f1[n], f2[n];
 
    
    for ( int i = 0 ; i < n ; i ++ ){
        int update1 = 0, update2 = 0 ; 
        if( i > 1){
            update1 = f2[i-2]+f2[i-1];
            update2 = f1[i-2]+f2[i-1];
        }else{
            update1 = 1;
            update2 = 1;
        }
        f1[i]=update1; 
        f2[i]=update2;
    }
    
    std::cout << f1[n-1] + f2[n-1];
}