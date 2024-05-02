#include <iostream>
using namespace std;

int getLength(char name[] , int n){
    int count = 0;
 
    
    for(int i=0 ; i<n; i++){
        if(name[i]!='\0'){
            count++;
        }
    }
   
    return count ;
}

int main(){
    
    char name[10];
    cout<<"Enter the Name : "<<endl;
    
    cin>>name;
    
    cout<<"Length : "<<getLength(name,10);
    
    return 0;
}