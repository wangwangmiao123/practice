//recheck, very typical basic 
#include "iostream"

#include "port.h"
using namespace std; 

int test1319(){
    int N ; 
    cin >> N ;
    
    for(int i=1; i <= N; i++){
        for(int j=1; j <= N; j++){
            int level = N-j + i-1;
            if(level <= N-1){
                cout << (level+1)*level / 2 + i;
                if(j==N){
                    cout << "\n" ; 
                }else{
                    cout << " " ; 
                }
            }else{
                int op_level = 2*N-1-level; 
                cout << N*N - (op_level+1)*op_level/2 + j << " "; 
            }
        }    
    }
}