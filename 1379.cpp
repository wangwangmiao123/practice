//Be caucious not to make it like C, instead of C++
#inlude <iostream>

struct RD; 
struct RD{
    
    int limit ;
    int cost; 
    struct RD *dest = 0;
    struct RD *next = 0;
    
    RD(int l, int c, struct RD *d, struct RD *n ){
        limit = l ; cost = c; dest  = d ; next =  n ; 
    }
}

int test1379(){
    int n , m ; 
    std::cin >> n  >> m ;
    
    struct RD* dummy[n]; 
    for (int i = 0 ; i < n ; i++){
        dummy[i] = new RD(-1,-1,0,0); 
    }    
    
    for (int i = 0 ; i < m ; i++){
            
    }    
    
    
}