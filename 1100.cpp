//The first sorting program I encounter during this process
#include "iostream"

#include "port.h"
using namespace std; 

int test1100(){
    int N; 
    cin >> N ;
    int team_id[N], score[N] ;
    
    for(int i = 0; i<N; i++){
        cin >> team_id[i] ;
        cin >> score[i];
    }
    
    int st=1,gp=0;
    while(true){
        if(st>=N) break; 
        gp=(int)(N/(st*2));
        cout << "gp" << gp << " " ;
        for(int i=0;i<gp; i++){
            int lf=i*st*2, rt = i*st*2+st;
            int rt_ = rt+st-1;
            while(true){
                if(score[lf] < score[rt]){
                    // copy a chunk of memory from 
                    int temp = score[rt] ;
                    int *ptr=score+rt;
                    while(ptr!=score+lf) {*ptr=*(ptr-1); ptr--;} 
                    score[lf] = temp ;
                    
                    temp = team_id [rt] ;
                    ptr = team_id + rt;
                    while(ptr!=team_id+lf) {*ptr=*(ptr-1); ptr--;} 
                    team_id[lf] = temp ;
                    rt++; lf++;
                }else{
                    lf++;
                }
                if(rt>rt_ || lf == rt || lf > rt_) break;
            }
        }
        
        if(((int)N/st)%2!=0 && N%st!=0){
            cout << "test";
            int lf=st*((int)(N/st))-st, rt=st*((int)(N/st));
            int rt_ = N-1;
            while(true){
                if(score[lf] < score[rt]){
                    // copy a chunk of memory from 
                    int temp = score[rt] ;
                    int * ptr = score + rt; 
                    while(ptr!=score+lf) {*ptr=*(ptr-1); ptr--;} 
                    score[lf] = temp ;
                    
                    temp = team_id [rt];
                    ptr = team_id + rt;
                    while(ptr!=team_id+lf) {*ptr=*(ptr-1); ptr--;} 
                    team_id[lf] = temp ;
                    temp = team_id [rt] ;
                    rt++; lf++;
                }else{
                    lf++;
                }
                if(rt>rt_ || lf > rt_ || lf == rt) break;
            }
        }
        st *= 2 ;
    }
    
    cout << "\n" ;
    for(int i = 0 ; i < N ; i ++ ) 
        cout << team_id[i] << " " <<  score[i] <<"\n" ;
} 