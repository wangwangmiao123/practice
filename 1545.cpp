#include <iostream>
#include <cmath>
#include <cstring>

using namespace std ;

int main(int argc, char **argv)
{
    int N ;
    char temp[2];
    char* dic[26] = {0}; 
    
    cin >> N ; 
    int i = 0 ; 
    while(i++ < N){
        cin>>temp;
//        cout << "test" ;
//        cin >> temp ;
        char *pt = dic[temp[0]-'a']; 
        if(pt==0){
            pt = new char[26];
            dic[temp[0]-'a'] = pt; 
            *pt={0};
            pt[0] = temp[1]; 
        }else{
            pt[strlen(pt)]=temp[1]; 
        }
    }
    
    char cc; 
    cin >> cc ;
    
    for(int i = 0 ; i < strlen(dic[cc-'a']) ; i++ ){
        cout << cc<<dic[cc-'a'][i]<<"\n" ;
    }
}


