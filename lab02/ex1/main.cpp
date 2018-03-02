/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main() {
    int n;
    do{
        cout<<"Entrez un entier strictement positif :"<<endl;
        cin>>n;
    }while(n<=0);
    
    int cube = n*n*n;
    int s = 0;
    int p = 1;
    int k = 1;
    
    while(s != cube){
        if(s > cube){
            s = s-(2*k-1);
            k++;
        }
        if(s < cube){
            s = s+(2*p-1);
            p++;
        }
    }
    
    int premier = 2*(k-1);
    int dernier = 2*(p-1);
    k = premier;
    
    cout<<"Cube = ";
    
    while(k < dernier){
        cout<<k<<" + ";
        k = k+2;
    }
    
    cout<<dernier<<endl;
}


