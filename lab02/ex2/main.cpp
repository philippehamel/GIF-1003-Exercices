/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main() {
    int n = 0;
    int nbr_espace;
    int nbr_char;
    while(n<=0){
        cout<<"Combien de ligne? "<<endl;
        cin>>n;
    }
    if(n%2 == 0){
        while(n>0){
            cout<<"*"<<endl;
            n = n-1;
        }
    }    
    if(n%2 != 0){
        while(n>0){
            cout<<"*"<<endl;
            n = n-1;
        }
    }
}


