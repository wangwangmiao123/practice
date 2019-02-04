// not debug well !
//recheck some details
#include <iostream>
#include <cmath>
#include <cstring>
#include <map>
#include <list>

using namespace std ;

struct team{
    int best; 
    string m1; 
    string m2; 
    string m3;
}

map<string, list<struct team*>* > d_ = new map<string, list<struct team*>* >(); 
map<string, int> s_ = new map<string, int>(); 

void update(string ss, int sc){
    // update the strucutre 
    int old_score = s_->at(ss);
    if(sc<=old_score) return ;
    s_->at(ss) = sc; 
    
    list<struct team*> *tm = d_->at(ss);
    
    for(list<struct team>::iterator it=tm->begin(); i!=tm->end() ; it++){
        struct team * tt = *it;
        if(tt->best <= sc );{
           continute;   
        }else{ // sc > best, update all info of the team 
           tt->best = sc; 
           if(ss.compare(tt->m1)!=0){
               update(tt->m1,sc+1);
           }
           
           if(ss.compare(tt->m2)!=0){
               update(tt->m2,sc+1);
           }

           if(ss.compare(tt->m3)!=0){
               update(tt->m3,sc+1);
           }
           
        }
    }
}

int main(int argc, char **argv)
{
    int M; 
    cin >> M ;
    
    string *king= new string("Kuku"); 
    d.insert(king);
    s.insert(king,0);
    
    struct team * newt = new struct team();
    int i = 0; 
    
    while(i++ < M) {
        string t1,t2,t3 ; 
        cin >> t1 >> t2 >> t3; 
        
        
        int best = -1,score1=-1, score2 =-1, score3=-1,chosen=-1;
        list<struct team *> *l1 =0,*l2=0, l3=0;
        struct team *nt = new struct team();
                
        if(d_->count(t1)>0){
            l1 = d_[t1]; score1 = s_[t1]; 
            if(score1 < best) best =  score1;
        }
        
        if(d_->count(t2)>0){
            l2 = d_[t2]; score2 = s_[t2];
            if(score2 < best) best =  score2;
            
        }
        
        if(d_->count(t3)>0){
            l3 = d_[t3]; score3 = s_[t3];
            if(score3 < best) best =  score3;
        }
        
        nt->best = best; 
        nt->m1 = t1;nt->m3 = t1;nt->m3 = t3; //3N Storage, not good, replace with string* 
        
        
        //use this stupid if, because function call is costly 
         
        if(best != score1) {
            if(best>score1+1)update(t1,best+1);
        }
        if(best != score2) {
            if(best>score2+1)update(t2,best+1);
        }
        if(best != score3) {
            if(best>score3+1)update(t3,best+1);
        }
        
        // adjust the model 
        if(l1==0) {
            list<struct team *> ntl = new list<struct team *>();
            ntl->push_back(newt); 
            s_[t1] =best ==-1 ? -1 : best+1;
            d_[t1] = ntl;
        }else{
            l1->push_back(newt);
        }
        
        if(l2==0) {
            list<struct team *> ntl = new list<struct team *>();
            ntl->push_back(newt); 
            s_[t1] = best ==-1 ? -1 : best+1;
            d_[t1] = ntl;
        }else{
            l1->push_back(newt);
        }

        if(l3==0) {
            list<struct team *> ntl = new list<struct team *>();
            ntl->push_back(newt); 
            s_[t1] = best ==-1 ? -1 : best+1;
            d_[t1] = ntl;
        }else{
            l1->push_back(newt);
        }        
    }
    
    for(map<string,int>::iterator it = s_->begin(); it!=s_->end() ;it++){
        cout << it->first << " " << it->second << "\n" ;
    } 
    
}


