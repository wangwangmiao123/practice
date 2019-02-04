//
#include "iostream"

int test1639(){
    int m,n; 
    std::cin >> m >> n; 
    int store[m][n]; 
    for ( int i = 0 ; i < m ; i++ ){
        for ( int j = 0 ; j < n ; j ++ ){
            store[i][j] = 0 ; 
        }
    }
    for ( int i = 0 ; i < m ; i++ ){
        store[i][0]=i%2; 
    }
    for ( int i = 0 ; i < n ; i++ ){
        store[0][i]=i%2; 
    }
    
    for ( int i = 1 ; i < m ; i++ ){
        for ( int j = 1 ; j < n ; j++ ){
            int check = 0 ;
            for ( int f = 1 ; f <= (i+1)/2 ; f++ ){
                int temp1 = store[f-1][j];
                int temp2 = store[i-f][j]; 
                check = (temp1+temp2)%2 ? 0 : 1; 
                if(check){
                    break; 
                }
            }
            if(check) {
                store[i][j] = check ; continue; 
            } 
            
            for ( int f = 1 ; f <= (j+1)/2 ; f++ ){
                int temp1 = store[i][f-1];
                int temp2 = store[i][j-f]; 
                check = (temp1+temp2)%2 ? 0 : 1; 
                if(check){
                    break; 
                }
            }
            if(check) store[i][j] = check ;
        }
    }
    
    #ifdef TEST
    for ( int i = 0 ; i < m ; i++ ){
        for ( int j = 0 ; j < n ; j ++ ){
                std::cout << store[i][j] << " ";
        }
        std::cout << "\n";
    }
    #endif 
    if(store[m-1][n-1]){
        std::cout << "[:=[first]"; 
    }else{
        std::cout << "[second]=:]";
    }
}