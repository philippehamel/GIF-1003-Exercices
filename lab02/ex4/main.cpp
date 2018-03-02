/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main (void){
    short client;
    short conso;
    double montant_facture;
    
    cout<<"Numero de client : "<<endl;
    cin>>client;
    cout<<"Consommation du client "<<client<<" : "<<endl;
    cin>>conso;
    
    if(conso <= 100){
        montant_facture = 25+(0.5*conso);
    }
    if(conso <= 250){
        montant_facture = 75+((conso-100)*0.35);
    }
    if(conso > 250){
        montant_facture = 127.5+((conso-250)*0.2);
    }
    cout<<"Le client numero "<<client<<" doit "<<montant_facture<<" $"<<endl;
}


