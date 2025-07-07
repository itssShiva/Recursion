#include<iostream>
using namespace std;

void printNumbers(int n,int m){
    if (n>=1)
    {  
        cout<<m<<endl; 
        
        printNumbers(n-1,m+1);
    }
    
    
}


int main(){
    int n=10;
    int m=1;
    printNumbers(n,m);
}