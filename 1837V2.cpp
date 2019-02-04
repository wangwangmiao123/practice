// not debug well !
// improve list
// 1. vector grow cost 
// 2. code is not very nice, to be frank it is ugly
#include <iostream>
#include <cmath>
#include <cstring>
#include <map>
#include <list>
#include <vector>


using namespace std ;


void reflesh(int i, int x,map<string, int> *name , vector<list<int>*>* data, vector<int> * best){
   int origin = (*best)[i];
   if(origin>x){
      (*best)[i] = x; // updated with x          
   }else return;
   
   list<int>* lst = (*data)[i];
   for(list<int>::iterator it = lst->begin(); it != lst->end() ; it ++){
       int temp = *it ;
       if((*best)[i]>x+1){ //update that 
           reflesh(temp, x+1, name, data, best);
       }
   }
}

int main(int argc, char **argv)
{
    int counter = 1; 
    map<string, int> *name ;
    vector<list<int>*> *data ; 
    vector<int> *best;
        
    name = new map<string, int>() ;
    data = new vector<list<int>*>() ;
    best = new vector<int>();    

    
    int N  ;
    cin >> N ;
    data->push_back(new list<int>());
    best->push_back(0);
    (*name)["Isenbaev"] = 0;
    
    int i = 0; 
    while(i++<N) {
        //cout << "test" ;
        string t1,t2,t3;
        int i1,i2,i3,score1=-1,score2=-1,score3=-1; 
        
        cin >> t1 >> t2 >> t3;
        cout << name->count(t1 ) << " \n " ;
        cout << name->count(t2) << " \n ";
        cout << name->count(t3 ) << "\n";
        
        cout.flush();
        if(name->count(t1)>0){ i1 = (*name)[t1]; score1=(*best)[i1];}
        if(name->count(t2)>0){ i2 = (*name)[t2]; score2=(*best)[i2];}
        if(name->count(t3)>0){ i3 = (*name)[t3]; score3=(*best)[i3];}
            
        int update = -1; 
        if((update == -1 && score1 != -1)||(update != -1 && score1 !=-1 && score1 < update)) update=score1; 
        if((update == -1 && score2 != -1)||(update != -1 && score2 !=-1  && score2 < update)) update=score2; 
        if((update == -1 && score3 != -1)||(update != -1 && score3 !=-1 && score3 < update)) update=score3; 
    
    
        // cout << update;
        
        if(score1 != -1 && score1 > update+1){
            reflesh(i1, update+1, name, data, best); 
        }    
        
        if(score2 != -1 && score2 > update+1){
            reflesh(i2, update+1, name, data, best); 
        }
        
        if(score3 != -1 && score3 > update+1){
            reflesh(i3, update+1,name, data, best); 
        }
        
        //implement relationship 
        if(score1==-1){
            i1= counter++;
            (*name)[t1] = i1; 
            data->push_back(new list<int>());
            cout << data->size();
        }
        
        if(score2==-1){
            i2= counter++;
            (*name)[t2] = i2; 
            data->push_back(new list<int>());
            cout << data->size();
        }
        
        if(score3==-1){
            i3= counter++;
            (*name)[t3] = i3; 
            data->push_back(new list<int>());
            cout << data->size();
        }
        cout.flush();
                   
       (*data)[i1]->push_back(i2); 
       (*data)[i1]->push_back(i3); 
       (*data)[i2]->push_back(i1); 
       (*data)[i2]->push_back(i3); 
       (*data)[i3]->push_back(i1); 
       (*data)[i3]->push_back(i2);
                
        if(update != -1){
            score1 = score1 == update? update:update+1;
            score2 = score2 == update? update:update+1;
            score3 = score3 == update? update:update+1;
            
        } 
        
        if (i1 >= best->size())best->push_back(score1);
        else{
               (*best)[i1] = score1;          
        }
        if (i2 >= best->size())best->push_back(score2);
        else{
               (*best)[i2] = score2;          
        }
        if (i3 >= best->size())best->push_back(score3);
        else{
               (*best)[i3] = score3;          
        }
        
        
    for(map<string, int>::iterator it = name->begin(); it!= name->end(); it++) {
        cout << it->first;
        cout << " " << (*best)[it->second] << "\n" ;
    }
    }

}


