#include <iostream>
using namespace std;

 void usandopuntero(int *puntero_1, int *puntero_2){
     int intermedio =& puntero_1;
     
     puntero_1 = puntero_2 ;
     puntero_2 =& intermedio;
     return;     
 }
 int main(){
     int *puntero = NULL;
     int *puntero2= NULL;
     int variable_1 = 14;
     int variable_2 = 27;
     puntero =& variable_1;
     puntero2 =& variable_2;
     cout << puntero << puntero2;
     usandopuntero(puntero, puntero2);
    cout << puntero << puntero2;
     return 0;
 }
 